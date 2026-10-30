#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct member_name
{
    char f_name[10];
    char m_name[10];
    char l_name[10];
};


struct member_id
{
    char id[30];
    struct member_name name;
}members[5] = 
{
    {"2600421001", {"hu", "jun", "yu"}},
    {"2600421002", {"wen", "ji", "yao"}},
    {"2600421003", {"xu", "yu", "hang"}},
    {"2600421004", {"quan", "hao", "tong"}},
    {"2600421005", {"cui", "chen", "xi"}}
};

int main()
{
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%s, %s %c. -- %s\n", members[i].name.l_name, members[i].name.f_name, members[i].name.m_name[0], members[i].id);
    }
    return 0;
}
