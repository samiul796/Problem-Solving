#include <stdio.h>

int main()
{
    double n = 3.14159;
    double x;

    scanf("%lf", &x);
    printf("A=%.4lf\n", n * x * x);

    return 0;
}
