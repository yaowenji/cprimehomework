#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    FILE *fp;
    int count = 0;
    char name[50];
    printf("请输入文件名：\n");
    scanf("%s", name);
    if((fp = fopen(name , "r")) == NULL)
    {
        printf("无法打开\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("文件 %s 有%d个字符\n", name, count);

    return 0;    
}