#include <stdio.h>
#include <locale.h>
int main()
{
    int num1, num2;
    setlocale(LC_CTYPE, "RUS");
    

    puts("ââåäèòå ÷èñëî");
    scanf("%d", &num1);
    printf("Ââåäåíî ÷èñëî: %d\n", num1);

  
    puts("ââåäèòå ÷èñëî");
    scanf("%d", &num2);
    printf("Ââåäåíî ÷èñëî: %d\n", num2);
    printf("ñóììà: %d + %d=%d\n", num1, num2, num1 + num2);
    printf("Ðàçíîñòü: %d - %d=%d\n", num1, num2, num1 - num2);
    printf("Ïðîèçâåäåíèå: %d * %d=%d\n", num1, num2, num1 * num2);
    
    printf("×àñòíîå: %d / %d=%d\n", num1, num2, num1 / num2);
    printf("Îñòàòîê îò äåëåíèÿ: %d // %d = %d\n", num1, num2, num1 % num2);


    

}

    
