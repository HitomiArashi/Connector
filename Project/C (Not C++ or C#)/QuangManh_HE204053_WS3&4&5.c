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

    printf("Chuoi ban dau: %s\n", str);
    xoa_ky_tu_null(str, index_to_delete);
    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Cau_1();
void Cau_2();
void Cau_3();
void Cau_4();
void Cau_5();
void Cau_6();
void Cau_7();
void Cau_8();
void Cau_9();
void Cau_10();

int main() {
	char option;
	do
	{
  		system("cls");
		printf("-------------------Studen Information-------------------\n");
		printf(" Name   :  Tran Quang Manh\n");
		printf(" ID     :  HE204053\n");
		printf(" Class  :  SE2042\n");
		printf("--------------------------------------------------------\n\n");
		printf("-------------------------MENU---------------------------\n");
		printf("   [a] Cau 1                        [f] Cau 6\n");
		printf("   [b] Cau 2                        [g] Cau 7\n");
		printf("   [c] Cau 3                        [h] Cau 8\n");
		printf("   [d] Cau 4                        [i] Cau 9\n");
		printf("   [e] Cau 5                        [j] Cau 10\n\n");
		printf("                        [E] Exit\n");
		printf("--------------------------------------------------------\n");
		printf("Enter you option: ");
		scanf("%c", &option);
		if (option == 'a')
		{
			Cau_1();
		}
		else if (option == 'b')
		{
			Cau_2();
		}
		else if (option == 'c')
		{
			Cau_3();
		}
		else if (option == 'd')
		{
			Cau_4();
		}
		else if (option == 'e')
		{
			Cau_5();
		}
		else if (option == 'f')
		{
			Cau_6();
		}
		else if (option == 'g')
		{
			Cau_7();
		}
		else if (option == 'h')
		{
			Cau_8();
		}
		else if (option == 'i')
		{
			Cau_9();
		}
		else if (option == 'j')
		{
			Cau_10();
		}
  		system ("pause");
	}
	while (option != 'E');
  	printf("\n");
  	system ("pause");
  	return(0);
}

//a.Đếm các ký tự lặp lại trong một chuỗi
void Cau_1()
{
	printf("-------------------------Cau 1--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int cnt[52];
	int space;
	int i;
	for (i = 0; i < 26; i ++)
	{
		cnt[i] = 0;
	}
	int length = strlen(inp);
	for (i = 0; i < length; i ++)
	{
		if (inp[i] == ' ')
		{
			space ++;
		}
		else if (inp[i] >= 'a' && inp[i] <= 'z')
		{
			cnt[inp[i] - 'a'] ++;
		}
		else if (inp[i] >= 'A' && inp[i] <= 'Z')
		{
			cnt[inp[i] - 'A' + 26] ++;
		}
	}
	
	printf("Result:\n");
	if (space > 1)
	{
		printf("' ':	%d\n", space);
	}
	for (i = 0; i < 26; i ++)
	{
		if (cnt[i] > 1 && i < 26)
		{
			printf("'%c':	%d\n", 'a' + i, cnt[i]);
		}
		else if (cnt[i] > 1 && i >= 26)
		{
			printf("'%c':	%d\n", 'A' + (i - 26), cnt[i]);
		}
	}
	printf("--------------------------------------------------------\n");
	return;
}

//b.Hoán đổi các trường hợp in hoa in thường trong một chuỗi đã cho.
void Cau_2()
{
	printf("-------------------------Cau 2--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	for (i = 0; i < length; i ++)
	{
		if (inp[i] >= 'a' && inp[i] <= 'z')
		{
			inp[i] += 'A' - 'a';
		}
		else if (inp[i] >= 'A' && inp[i] <= 'Z')
		{
			inp[i] += 'a' - 'A';
		}
	}
	
	printf("Result:\n%s\n", inp);
	printf("--------------------------------------------------------\n");
	return;
}

//c.Viết hoa chữ cái đầu tiên và viết thường các chữ cái còn lại trong một chuỗi cho trước.
void Cau_3()
{
	printf("-------------------------Cau 3--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	for (i = 0; i < length; i ++)
	{
		if (i == 0 || inp[i - 1] == ' ')
		{
			if(inp[i] >= 'a' && inp[i] <= 'z')
			{
				inp[i] += 'A' - 'a';
			}
		}
		else
		{
			if (inp[i] >= 'A' && inp[i] <= 'Z')
			{
				inp[i] += 'a' - 'A';
			}
		}
	}
	
	printf("Result:\n%s\n", inp);
	printf("--------------------------------------------------------\n");
}

//d.Xóa các ký tự không mong muốn khỏi một chuỗi đã cho.
void Cau_4()
{
	printf("-------------------------Cau 4--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	for (i = 0; i < length; i ++)
	{
		if ((inp[i] < 'a' || inp[i] > 'z') && (inp[i] > 'A' || inp[i] < 'Z'))
		{
			inp[i] = ' ';
		}
	}
	printf("Result:\n%s\n", inp);
	printf("--------------------------------------------------------\n");
}

//e.Thay thế từng ký tự của một từ có độ dài từ 4 trở lên bằng một ký tự #.
void Cau_5()
{
	printf("-------------------------Cau 5--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	char word[100];
    int i = 0, j = 0;

	printf("Result:\n");
    while (1) {
        // Skip spaces
        while (inp[i] == ' ') {
            putchar(' ');
            i++;
        }

        // End if null character
        if (inp[i] == '\0')
            break;

        // Extract word
        j = 0;
        while (inp[i] != ' ' && inp[i] != '\0') {
            word[j++] = inp[i++];
        }
        word[j] = '\0';

        // Replace if word length >= 4
        if (strlen(word) >= 4) {
            for (int k = 0; k < strlen(word); k++) {
                putchar('#');
            }
        } else {
            printf("%s", word);
        }
    }

    printf("\n");

	printf("--------------------------------------------------------\n");
}

//f.Thay thế các ký tự lặp lại bằng các ký tự đơn 
void Cau_6()
{
	printf("-------------------------Cau 6--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	printf("Result:\n");
	for (i = 0; i < length; i ++)
	{
		if (i == 0)
		{
			printf("%c", inp[i]);
			continue;
		}
		else if (inp[i] == inp[i - 1])
		{
			continue;
		}
		else
		{
			printf("%c", inp[i]);
		}
	}
	printf("\n--------------------------------------------------------\n");
}

//g.Nhận vào một chuỗi và trả về ‘-‘ ở cả hai phía của mỗi phần tử không phải là nguyên âm. 
void Cau_7()
{
	printf("-------------------------Cau 7--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	printf("Result:\n");
	for (i = 0; i < length; i ++)
	{
		if(inp[i] != 'a' && inp[i] != 'e' && inp[i] != 'i' && inp[i] != 'o' && inp[i] != 'u' && inp[i] != 'y' && inp[i] != 'A' && inp[i] != 'E' && inp[i] != 'I' && inp[i] != 'O' && inp[i] != 'U' && inp[i] != 'Y')
		{
			printf("-%c-", inp[i]);
		}
		else
		{
			printf("%c", inp[i]);
		}
	}
	printf("\n--------------------------------------------------------\n");
}

//h.Trích xuất tên từ một địa chỉ Email
void Cau_8()
{
	printf("-------------------------Cau 8--------------------------\n");
	char inp[1000];
	printf("Input string: ");
	getchar();
	gets(inp);
	int length = strlen(inp);
	int i;
	printf("Result:\n");
	for (i = 0; i < length; i ++)
	{
		if (inp[i] == '@')
		{
			break;
		}
		else
		{
			printf("%c", inp[i]);
		}
	}
	printf("\n--------------------------------------------------------\n");
}

void Cau_9()
{
	printf("-------------------------Cau 9--------------------------\n");
	char inp_1[1000], inp_2[1000];
	int cnt = 0;

	printf("Input string 1: ");
	getchar();
	gets(inp_1);
	int length_1 = strlen(inp_1);

	printf("Input string 2: ");
	gets(inp_2);
	int length_2 = strlen(inp_2);

	int min_length = (length_2 < length_1 ? length_2 : length_1);

	int i;
	for (i = 0; i < min_length - 2; i ++)
	{
		if ((inp_1[i] == inp_2[i]) && (inp_1[i + 1] == inp_2[i + 1]) && (inp_1[i + 2] == inp_2[i + 2]))
		{
			cnt ++;
		}
	}
    printf("Result: %d\n", cnt);
	printf("--------------------------------------------------------\n");
}

void Cau_10()
{
	printf("------------------------Cau 10--------------------------\n");
	int n;
	printf("Input number of student: ");
	scanf("%d", &n);
	printf("Input student(s) name:\n");
	char student[n][1000];
	int i, j;
	getchar();
	for (i = 0; i < n; i ++)
	{
		gets(student[i]);
	}

	char temp[100];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(student[j], student[j + 1]) > 0) {
                strcpy(temp, student[j]);
                strcpy(student[j], student[j + 1]);
                strcpy(student[j + 1], temp);
            }
        }
    }

	printf("Result:\n");
	for (i = 0; i < n; i ++)
	{
		printf("%s\n", student[i]);
	}

	printf("--------------------------------------------------------\n");
	return;
}