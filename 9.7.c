#include <stdio.h>

int position(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 1;
    }else if(ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 1;
    }else
    {
        return -1;
    }
}

void getstr(void)
{
    int ch;
    printf("请输入文本：");
    ch = getchar();
    while (ch != EOF)
    {
        if(ch == '\n')
        {
            ch = getchar();
            continue;
        }
        if(position(ch) != -1)
        {
            printf("%c -- %d\n", ch, position(ch));
        }else
        {
            printf("并非字母\n");
        }
        ch = getchar();        
    }
    
}

int main()
{
    getstr();
}