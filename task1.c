#include <stdio.h>
#include <locale.h>
int main()
{
    int num1, num2;
    setlocale(LC_CTYPE, "RUS");
    

    puts("������� �����");
    scanf("%d", &num1);
    printf("������� �����: %d\n", num1);

  
    puts("������� �����");
    scanf("%d", &num2);
    printf("������� �����: %d\n", num2);
    printf("�����: %d + %d=%d\n", num1, num2, num1 + num2);
    printf("��������: %d - %d=%d\n", num1, num2, num1 - num2);
    printf("������������: %d * %d=%d\n", num1, num2, num1 * num2);
    
    printf("�������: %d / %d=%d\n", num1, num2, num1 / num2);
    printf("������� �� �������: %d // %d = %d\n", num1, num2, num1 % num2);


    

}

    