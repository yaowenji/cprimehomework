#include <stdio.h>
#include <string.h>

char* getstr(char* str, int n);

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str[n + 1];
    printf("请输入文本：\n");
    char* result = getstr(str, n);
    printf("你输入了：\n");
    puts(result);

    return 0;
}

char* getstr(char* str, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        str[i] = getchar();
    }
    str[n] = '\0';
    return str;
}