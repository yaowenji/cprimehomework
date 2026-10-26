#include <stdio.h>
#include <float.h>

int main()
{
    double a = 1.0 / 3.0;
    float b = 1.0 / 3.0;
    printf("a = %.6lf b = %.6lf\n", a, b);
    printf("a = %.12lf b = %.12lf\n", a, b);
    printf("FLT_DIG = %d DBL_DIG = %d\n", FLT_DIG, DBL_DIG); //重点知识，新掌握c

    return 0;
}