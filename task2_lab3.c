#include <stdio.h>
#include <locale.h>  
#include <stdlib.h>

int main()
{
    int miles;
    float result;
    float D = 1.852;  

    setlocale(LC_CTYPE, "RUS");
    printf("1 ìîðñêàÿ ìèëÿ = 1.852 êì\n");
    printf("Ââåäèòå êîë-âî ìîðñêèõ ìèëü: ");

    scanf("%d", &miles);

    result = D * miles; 
    printf("%d ìîðñêèõ ìèëü = %.2f êì\n", miles, result);

    return 0;

}
