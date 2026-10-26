#include <stdio.h>

int main()
{
    double a;
    printf("请输入一个浮点数：");
    scanf("%lf", &a);
    printf("a.The input is %.1lf or %.1le.\n", a, a); 
    printf("a.The input is %+.3lf or %.3lE.\n", a, a); 

    return 0;
} 