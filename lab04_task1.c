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
	
	printf("������� ������ char: ");
	scanf(" %c", &c);  
	
	printf("������� ����� ����� int: ");
	scanf(" %d", &i);
	
	printf("������� ������� ����� float: ");

	scanf(" %f", &f);
    
	printf("������� ������� ����� double: ");
	scanf(" %lf", &d);

	printf("����� ��������:");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %f\n", f);
	printf("double d = %e\n", d);

	

	



	}
