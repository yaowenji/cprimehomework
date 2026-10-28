#include <stdio.h>

int main()
{
    int units = 0;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
    {
        printf("No Luck\n");
        scanf("%d", &units);
    }
    printf("right!\n");

    return 0;
}