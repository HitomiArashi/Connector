org 100h

section .data
    prompt_msg  db 'Enter a number: $'
    input_buffer db 10, 0, 10 dup('$')
    output_msg  db 13, 10, 'You entered: $'

section .text
    ; Prompt for input
    mov dx, prompt_msg
    mov ah, 9
    int 21h

    ; Read the input string
    mov dx, input_buffer
    mov ah, 0Ah
    int 21h

    ; Prepare to print the entered string.
    ; The second byte of input_buffer contains the number of characters read.
    ; We need to place a '$' character after the input string to terminate it
    ; for the DOS print string function.
    mov bl, [input_buffer + 1]  ; Get the length of the input
    mov bh, 0
    mov byte [input_buffer + 2 + bx], '$' ; Terminate the string

    ; Print the output message
    mov dx, output_msg
    mov ah, 9
    int 21h

    ; Print the entered number
    mov dx, input_buffer + 2
    mov ah, 9
    int 21h

    ; Exit to DOS
    mov ax, 4C00h
    int 21h