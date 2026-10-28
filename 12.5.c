#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int nums[100];
    for(int i = 0 ; i < 100 ; i++)
    {
        int num = rand() % 10 + 1; 
        nums[i] = num;
    }
    for(int i = 0 ; i < 100 - 1 ; i++)
    {
        for(int j = 0 ; j < 100 -1 -i ; j++)
        {
            if(nums[j] < nums[j + 1])
            {
                int t = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = t;
            }
        }
    }
    for(int i = 0 ; i < 100 ; i++)
    {
        printf("%d ", nums[i]);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}

