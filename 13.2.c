#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *f_a, *f_b;
    char str[512];
    if(argc != 3)
    {
        printf("读取源文件或目标文件失败\n");
        exit(EXIT_FAILURE);
    }else
    {
        if((f_a = fopen(argv[1], "rb")) == NULL )
        {
            printf("无法打开文件%s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        if((f_b = fopen(argv[2], "wb")) == NULL )
        {
            printf("无法打开文件%s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }
    size_t bytes;
    while ((bytes = fread(str, sizeof(char), 512, f_a)) > 0)
    {
        fwrite(str, sizeof(char), bytes, f_b);
    }
    fclose(f_a);
    fclose(f_b);

    return 0;
}
