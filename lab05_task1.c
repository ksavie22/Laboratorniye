#include <math.h>
#include <stdio.h>
#include <locale.h>
#define M_PI 3.14159265358979323846

void main() {
    setlocale(LC_CTYPE, "RUS");
    double gr;

    printf("������� �������: ");
    scanf("%lf", &gr);

    // ��������� � ������� � ������� �����
    double rad = gr * M_PI / 180;
    double sinys = sin(rad);

    // ������� ���������
    printf("sin(%.0f�) = %.6f\n", gr, sinys);
}









