#include <stdio.h>

int main()
{
    int count, sum;
    int day;
    printf("请输入天数：");
    scanf("%d", &day);
    count = 0;
    sum = 0;
    while(count++ < day)
    {
        sum +=  count * count;
    }
    printf("sum = %d\n", sum);

    return 0;
}