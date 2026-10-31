#include <stdio.h>
#include <stdlib.h>

int zhuanhuan(char* num)
{
    int sum = 0;
    while (*num != '\0')
    {
        sum *= 2;
        sum += *num++ - '0';
    }
    
    return sum;
}

int main()
{
    char num[10];
    scanf("%s", num);
    printf("%d\n", zhuanhuan(num));

    return 0;
}