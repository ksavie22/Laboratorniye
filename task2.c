#include <stdio.h>
#include <locale.h>  
#include <stdlib.h>

int main()
{
    int miles;
    float result;
    float D = 1.852;  

    setlocale(LC_CTYPE, "RUS");
    printf("1 ������� ���� = 1.852 ��\n");
    printf("������� ���-�� ������� ����: ");

    scanf("%d", &miles);

    result = D * miles; 
    printf("%d ������� ���� = %.2f ��\n", miles, result);

    return 0;
}