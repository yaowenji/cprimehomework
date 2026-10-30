#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp;
    int ch;
    for(int i = 0 ; i < argc - 1 ; i++)
    {
        if((fp = fopen(argv[i + 1], "r")) != NULL)
        {
            printf("现在打开的文件是%s,内容如下:\n", argv[i + 1]);
            while((ch = getc(fp)) != EOF)
            {
                putchar(ch);
            }
            printf("\n");
            fclose(fp);
        }else
        {
            printf("打开文件%s失败\n", argv[i + 1]);
            exit(EXIT_FAILURE);
        }
    }
    printf("所有文件内容输出完毕\n");

    return 0;
}