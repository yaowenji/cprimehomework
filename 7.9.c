#include <stdio.h>

int isprime (int n)
{
    if( n <= 1)
    {
        return 0;
    }else if(n == 2 || n == 3)
    {
        return 1;
    }else if(n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    for(int i = 5 ; i * i <= n ; i += 6)
    {
        if( n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0)
    {
        for(int i = n ; i > 0 ; i--)
        {
            if(isprime(i) == 1)
            {
                printf("%d\n", i);
            }
        }
    }else
    {
        printf("输入格式错误");
    }

    return 0;
}