#include <stdio.h>

void Temperatures(double n, double* she , double* kai)
{
    *she = 5.0 / 9.0 * (n - 32.0);
    *kai = *she + 273.16; 
    printf("she = %.2lf, kai = %.2lf\n", *she, *kai);
}

int main()
{   double hua;
    printf("请输入一个华氏度：");
    while(scanf("%lf", &hua) == 1 )
    {
        double she, kai;
        Temperatures(hua , &she, &kai);
        printf("请再次输入：");
    }
    printf("错误！\n");

    return 0;
}