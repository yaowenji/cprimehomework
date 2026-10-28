#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* getstr(char* str);

int main()
{
    char str[100];
    printf("请输入文本: ");
    fgets(str, sizeof(str), stdin); 
    char* result = getstr(str);
    if (result != NULL) 
    {
        printf("提取的单词: %s\n", result);
    } else 
    {
        printf("未找到单词\n");
    }


    return 0;
}

char* getstr(char* str)
{
    int i = 0;
    
    //跳过前导空白字符
    while (str[i] != '\0' && isspace(str[i])) 
    {
        i++;
    }
    
    //全是空白，没单词
    if (str[i] == '\0') 
    {
        return NULL;
    }
    
    //找到单词的起始位置
    char* word_start = &str[i];
    
    //寻找单词结束的位置
    while (str[i] != '\0' && !isspace(str[i])) 
    {
        i++;
    }
    
    //将单词结尾变成结束符 '\0'
    str[i] = '\0'; 
    
    //返回单词的起始地址
    return word_start;
}