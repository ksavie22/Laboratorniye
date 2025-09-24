#include <stdio.h>
#include <locale.h>  
#include <stdlib.h>

int main()
{
    int miles;
    float result;
    float D = 1.852;  

    setlocale(LC_CTYPE, "RUS");
    printf("1 морска€ мил€ = 1.852 км\n");
    printf("¬ведите кол-во морских миль: ");

    scanf("%d", &miles);

    result = D * miles; 
    printf("%d морских миль = %.2f км\n", miles, result);

    return 0;
}