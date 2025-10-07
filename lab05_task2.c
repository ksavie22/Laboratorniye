#include <stdio.h>
#include <math.h>

int main() {
    const double p = 0.5;
    double x;
    printf("x = ");
    scanf("%lf", &x);

   
    double a = log(p * p + x * x);       
    double b = exp(sqrt(p + x));        
    double y = (a * a * a) / b;           

   
    printf("x = %.1lf\n", x);
    printf("y = %.4lf\n", y);

    return 0;
}