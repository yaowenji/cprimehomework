#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dakaiwei(int n)
{
    int sum = 0;
    for(int i = 0 ; i < 32 ; i++)
    {
        if(1 & n != 0)
        {
            sum++;
        }
        n >>= 1;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("整形数据%d的打开位有%d个\n", n, dakaiwei(n));

    return 0;
}