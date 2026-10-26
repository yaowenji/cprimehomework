#include <stdio.h>

int main()
{
    char a = 'F';
    int count = 1;
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j = 0 ; j < count ; j++)
        {
            printf("%c", (a+j));
        }
        printf("\n");
        count++;
    }

    return 0;
}