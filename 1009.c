#include <stdio.h>

int main()
{
    char c;
    double a, b, T;
    scanf("%s %lf %lf", &c, &a, &b);
    T=((15*b)/100)+a;
    printf("TOTAL = R$ %0.2lf\n",T);

    return 0;
}