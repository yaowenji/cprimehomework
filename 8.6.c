#include <stdio.h>

char get_first(void)
{
    int ch;
    ch = getchar();
    while(1)
    {
        if(ch != ' ' || ch != '\n' || ch != '\t')
        {
            break;
        }else
        {
            ch = getchar();
        }
    }
    return ch;
}

int main()
{
    char result = get_first();
    printf("%c\n", result);
    return 0;
}