#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int n = 4, L = 337, k = 5, m = 3;

    printf("����:\n%4d\n%4d\n�����:\n%+06.4f", 3, 337, 3.0 / 337);

    return 0;
}