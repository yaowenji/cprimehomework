#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct month
{
    char m_name[10];
    int day;
    int num;
}months[12] = 
{
    {"january", 31, 1},
    {"february", 28, 2},
    {"march", 31, 3},
    {"april", 30, 4},
    {"may", 31, 5},
    {"june", 30, 6},
    {"july", 31, 7},
    {"august", 31, 8},
    {"september", 30, 9},
    {"october", 31, 10},
    {"november", 30, 11},
    {"december", 31, 12}
};

int sumdays(char* month)
{
    int sum = 0;
    for(int i = 0 ; i < 12 ; i++)
    {
        if(strcmp(month, months[i].m_name) == 0)
        {
            return sum;
        }else
        {
            sum += months[i].day;
        }
    }
}

int main()
{
    char name[10];
    printf("请输入英文月份名：\n");
    scanf("%s", name);
    printf("到%s月总共的天数为%d\n", name, sumdays(name));
    
    return 0;
}
