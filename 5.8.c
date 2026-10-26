#include <stdio.h>

int main()
{
    int a, b;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &b);
    printf("Now enter the first operand: ");
    scanf("%d", &a);
    if( a <= 0)
    {
        printf("Done.\n");
        return 0;
    }else
    {
        while(a > 0)
        {
            printf("%d %% %d is %d\n", a, b, (a % b));
            printf("Enter next number for first operand (<= 0 to quit): ");
            scanf("%d", &a);
            if( a <= 0)
            {
                printf("Done.\n");
                return 0;
            }
        }
    }
}