#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    printf("a.\"%s\".\n", s);
    printf("b.\"%20s\".\n", s);
    printf("c.\"%20s\".\n", s);
    printf("d.\"%*s\".\n", (len + 3), s);

    return 0;
}