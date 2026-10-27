#include <stdio.h>

void fibonacci(int n)
{
    int n1 = 1, n2 = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d ", n1);
        int t = n1;
        n1 = n2;
        n2 = n2 + t;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    printf("\n");
    
    return 0;
}