.MODEL SMALL
.STACK 100H

.DATA
    MSG_A       DB 'Enter number A: $'
    MSG_B       DB 0AH, 0DH, 'Enter number B: $'
    MSG_C       DB 0AH, 0DH, 'Enter number C: $'
    MSG_RESULT  DB 0AH, 0DH, 'A * (B - C) = $'
    MSG_INVALID DB 0AH, 0DH, 'Invalid input. Please enter only numbers.$'
    
    NUM_A       DW ?
    NUM_B       DW ?
    NUM_C       DW ?
    RESULT      DW ?

    ; Buffers for string input
    BUFFER_A_MAX  DB 6
    BUFFER_A_LEN  DB ?
    BUFFER_A      DB 6 DUP('$')

    BUFFER_B_MAX  DB 6
    BUFFER_B_LEN  DB ?
    BUFFER_B      DB 6 DUP('$')

    BUFFER_C_MAX  DB 6
    BUFFER_C_LEN  DB ?
    BUFFER_C      DB 6 DUP('$')
    
    RESULT_STR  DB 7 DUP('$') ; For displaying the result, including sign

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    ; --- GET NUMBER A ---
    LEA DX, MSG_A
    MOV AH, 9
    INT 21H
    
    LEA DX, BUFFER_A_MAX
    MOV AH, 0AH
    INT 21H
    
    LEA SI, BUFFER_A
    CALL ATOI
    JC INVALID_INPUT
    MOV NUM_A, AX

    ; --- GET NUMBER B ---
    LEA DX, MSG_B
    MOV AH, 9
    INT 21H
    
    LEA DX, BUFFER_B_MAX
    MOV AH, 0AH
    INT 21H
    
    LEA SI, BUFFER_B
    CALL ATOI
    JC INVALID_INPUT
    MOV NUM_B, AX

    ; --- GET NUMBER C ---
    LEA DX, MSG_C
    MOV AH, 9
    INT 21H
    
    LEA DX, BUFFER_C_MAX
    MOV AH, 0AH
    INT 21H
    
    LEA SI, BUFFER_C
    CALL ATOI
    JC INVALID_INPUT
    MOV NUM_C, AX

    ; --- CALCULATION: A * (B - C) ---
    MOV AX, NUM_B
    SUB AX, NUM_C   ; AX = B - C
    MOV BX, NUM_A
    IMUL BX         ; DX:AX = A * (B - C)
    MOV RESULT, AX  ; Store result (assuming it fits in 16 bits)

    ; --- PRINT RESULT ---
    LEA DX, MSG_RESULT
    MOV AH, 9
    INT 21H
    
    MOV AX, RESULT
    LEA DI, RESULT_STR
    CALL ITOA
    
    LEA DX, RESULT_STR
    MOV AH, 9
    INT 21H
    
    JMP EXIT

INVALID_INPUT:
    LEA DX, MSG_INVALID
    MOV AH, 9
    INT 21H

EXIT:
    MOV AH, 4CH
    INT 21H
MAIN ENDP

;----------------------------------------------------
; ATOI: Converts an ASCII string to a 16-bit integer.
; Input: SI points to the string (terminated by '$' or read length).
; Output: AX = integer value. Carry flag is set on error.
;----------------------------------------------------
ATOI PROC
    XOR BX, BX      ; BX will hold the result
    MOV CL, [SI-1]  ; Get the length of the string from buffer
    XOR CH, CH      ; Clear CH to make CX hold the length
    JCXZ ATOI_EXIT  ; If length is 0, exit

ATOI_LOOP:
    MOV AL, [SI]
    INC SI
    
    ; Check if character is a digit
    CMP AL, '0'
    JB ATOI_ERROR
    CMP AL, '9'
    JA ATOI_ERROR
    
    ; Convert ASCII digit to number
    SUB AL, '0'
    XOR AH, AH      ; Clear AH for multiplication
    
    ; Multiply current result by 10 and add new digit
    PUSH AX         ; Save current digit
    MOV AX, BX
    MOV DX, 10
    MUL DX          ; AX = BX * 10
    MOV BX, AX
    POP AX          ; Restore current digit
    ADD BX, AX      ; BX = (old_result * 10) + new_digit
    
    LOOP ATOI_LOOP
    
    MOV AX, BX
    CLC             ; Clear carry flag to indicate success
    JMP ATOI_EXIT

ATOI_ERROR:
    STC             ; Set carry flag to indicate error

ATOI_EXIT:
    RET
ATOI ENDP

;----------------------------------------------------
; ITOA: Converts a 16-bit integer to an ASCII string.
; Input: AX = integer, DI = pointer to string buffer.
; Output: String at DI.
;----------------------------------------------------
ITOA PROC
    MOV CX, 0       ; Counter for number of digits
    MOV BX, 10      ; Divisor
    
    ; Handle negative numbers
    CMP AX, 0
    JGE ITOA_LOOP
    PUSH AX         ; Save number
    MOV BYTE PTR [DI], '-'
    INC DI
    POP AX
    NEG AX          ; Make AX positive

ITOA_LOOP:
    XOR DX, DX      ; Clear DX for division
    DIV BX          ; AX = AX / 10, DX = remainder
    ADD DL, '0'     ; Convert remainder to ASCII
    PUSH DX         ; Push digit onto stack
    INC CX          ; Increment digit count
    CMP AX, 0       ; Is quotient zero?
    JNE ITOA_LOOP   ; If not, repeat

ITOA_POP_LOOP:
    POP AX          ; Pop digit
    MOV [DI], AL    ; Store it in the string
    INC DI
    LOOP ITOA_POP_LOOP
    
    MOV BYTE PTR [DI], '$' ; Null-terminate the string for INT 21H/AH=9
    RET
ITOA ENDP

END MAIN