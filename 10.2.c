#include <stdio.h>

void copy_arr(double target1[], double source[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        target1[i] = source[i];
    }
}

void copy_ptr(double *target2, double *source, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        *(target2 + i) = *(source + i);
    }
}

void copy_ptrs(double *target3, double *source , double *sourcemore)
{

}

int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    return 0;
}