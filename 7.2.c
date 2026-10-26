#include <stdio.h>

int main()
{
    int count = 0;
    int n = 0;
    char s[100];
    while (1)
    {
        scanf("%c", &s[n]);
        if(s[n] == '#')
        {
            break;
        }
        n++;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%c-%d ", s[i], s[i]);
        count++;
        if(count % 8 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}