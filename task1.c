#include <stdio.h>
#include <locale.h>
int main()
{
    int num1, num2;
    setlocale(LC_CTYPE, "RUS");
    

    puts("введите число");
    scanf("%d", &num1);
    printf("Введено число: %d\n", num1);

  
    puts("введите число");
    scanf("%d", &num2);
    printf("Введено число: %d\n", num2);
    printf("сумма: %d + %d=%d\n", num1, num2, num1 + num2);
    printf("Разность: %d - %d=%d\n", num1, num2, num1 - num2);
    printf("Произведение: %d * %d=%d\n", num1, num2, num1 * num2);
    
    printf("Частное: %d / %d=%d\n", num1, num2, num1 / num2);
    printf("Остаток от деления: %d // %d = %d\n", num1, num2, num1 % num2);


    

}

    