#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int erzhuanshi(char* num)
{
    unsigned int sum = 0;
    while (*num != '\0')
    {
        sum *= 2;
        sum += *num++ - '0';
    }
    
    return sum;
}

char* shizhuaner(unsigned int n, char* putnum)
{
    for(int i = 30 ; i >= 0 ; i--, n >>= 1)
    {
        putnum[i] = (1 & n) + '0';
    }
    putnum[31] = '\0';

    return putnum;
}

int main()
{
    char putnum[32];
    unsigned int result = 0;
    char s1[] = "1010"; 
    char s2[] = "1100"; 

    //~部分
    printf("~:\n");
    result = (~erzhuanshi(s1));
    shizhuaner(result, putnum);
    printf("%s %s\n", s1, putnum);
    result = (~erzhuanshi(s2));
    shizhuaner(result, putnum);
    printf("%s %s\n", s2, putnum);

    //&部分
    printf("&:\n");
    result = (erzhuanshi(s1) & erzhuanshi(s2));
    shizhuaner(result, putnum);
    printf("%s & %s = %s\n", s1, s2, putnum);

    //|部分
    printf("|:\n");
    result = (erzhuanshi(s1) | erzhuanshi(s2));
    shizhuaner(result, putnum);
    printf("%s | %s = %s\n", s1, s2, putnum);

    //^部分
    printf("^:\n");
    result = (erzhuanshi(s1) ^ erzhuanshi(s2));
    shizhuaner(result, putnum);
    printf("%s ^ %s = %s\n", s1, s2, putnum);

    return 0;
}