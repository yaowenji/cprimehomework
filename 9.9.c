#include <stdio.h>

double power(double n, int m)
{
    if( m == 1)
    {
        return n;
    }else if (m == 0)
    {
        return 1.0;
    }else if(m < 0)
    {
        return 0.0;
    }
    
    if(n == 0)
    {
        return 0.0;
    }
    return n * power(n, --m);
}

int main()
{
    double n;
    int m;
    scanf("%lf%d", &n, &m);
    printf("%.2lf\n", power(n, m));

    return 0;
}