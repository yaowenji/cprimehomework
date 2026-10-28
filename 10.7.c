#include <stdio.h>

void copy_arr(double target[5], double source[5], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        target[i] = source[i];
    }
}

void copy_arr2(double target[][5], double source[][5], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        copy_arr(target[i], source[i], n);
    }
}

int main()
{
    double source[5][5] = 
    {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.1, 2.2, 3.3, 4.4, 5.5}
    };
    double target[5][5] = {0};
    copy_arr2(target, source, 5);
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            printf("%.2lf ", target[i][j]);
        }
        printf("\n");
    }

    return 0;
}