#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main() {
    setlocale(LC_CTYPE, "RUS");
    
    int a = 11;
	int b = 3;
	printf("1. a=%d,b=%d\n\n", a, b);


    //int x = a / b;
    //float y = a / b;
//double z = a / b;

   // printf("Без преобразования:\n");
   // printf("x = %d\n", x);      
    //printf("y = %f\n", y);      
   // printf("z = %lf\n", z);  
//
    printf("float: %f\n", (float)a / b);
    printf("double: %lf\n", (double)a / b);
 
    return 0;







}