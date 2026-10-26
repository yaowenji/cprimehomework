#include <stdio.h>
#include <string.h>

int main()
{
    int big = 0, small = 0;
    char str[1000];
    scanf("%s", str);
    int n = strlen(str);
    for(int i = 0 ; i < n ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            big++;
        }else if(str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
    }
    printf("%d %d\n", big, small);

    return 0;
}