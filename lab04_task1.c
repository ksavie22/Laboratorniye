#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %.2f\n", f);
	printf("double d = %.12e\n", d);
	
	printf("Введите символ char: ");
	scanf(" %c", &c);  
	
	printf("Введите целое число int: ");
	scanf(" %d", &i);
	
	printf("Введите дробное число float: ");

	scanf(" %f", &f);
    
	printf("Введите дробное число double: ");
	scanf(" %lf", &d);

	printf("Новые значения:");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %f\n", f);
	printf("double d = %e\n", d);

	

	



	}
