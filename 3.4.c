#include <stdio.h>

int main()
{
    double num;
    printf("Enter a floating-point value: ");
    scanf("%lf", &num);
    printf("fixed-point notation: %lf\n", num);
    printf("exponebtial notation: %le\n", num);
    printf("p notation: %la\n", num);

    return 0;
}