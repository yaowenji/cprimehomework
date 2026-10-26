#include <stdio.h>

int main()
{
    int low = 1, high = 100;
    int guess = (low + high) / 2;
    char panduan = 'n';

    printf("Pick an interger from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong. \n");
    printf("Uh...is your number %d?\n", guess);
    while(getchar() != 'y')
    {
        if(panduan == 'y')
        {
            break;
        }else
        {
            printf("let us try again. \n");
        }
        printf("Big or Small? big -> 1 ; small -> 0\n");
        scanf(" %c", &panduan);
        if(panduan == '0')
        {
            low = guess + 1;
            guess = (low + high) / 2;
        }else if(panduan == '1')
        {
            high = guess - 1;
            guess = (low + high) / 2;
        }
        printf("Well, then, is it %d? \n", guess);
        printf("y or n?\n");
        scanf(" %c", &panduan);
    }
    printf("I knew that I could do it! \n");

    return 0;
}