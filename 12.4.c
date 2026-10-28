#include <stdio.h>

int cishu(void)
{
    static int count = 0;
    count += 1;
}

int main()
{
    int n;
    int count;
    printf("想要循环进行的次数：\n");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        count = cishu();
    }
    printf("循环的次数为：%d\n", count);

    return 0;
}