#include <stdio.h>
#include <string.h>

void xoa_ky_tu_null(char *str, int index) {
  if (index < 0 || index >= strlen(str)) {
    return;
  }
  str[index] = '\0'; // Đặt ký tự tại index thành ký tự null
  // Không cần dịch chuyển các ký tự sau.
}

int main() {
    char str[] = "Hello, World!";
    int index_to_delete = 7;

    printf("Chuỗi ban đầu: %s\n", str);
    xoa_ky_tu_null(str, index_to_delete);
    printf("Chuỗi sau khi xóa: %s\n", str);

    return 0;
}