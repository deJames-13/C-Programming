#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers - set of values that are statistically random; not true random

    char question[420];
    printf("\nAsk and you shall be answered...\n>>> ");
    scanf("$s", &question);

    srand(time(0));
    int dice = (rand() % 6) + 1;
    printf("\nThe magic 8 ball responded...\n>>> ");

    switch (dice)
    {
    case 1:
        printf("Concentrate and ask again.\n");
        break;
    case 2:
        printf("Cannot predict now.\n");
        break;
    case 3:
        printf("Don't count on it.\n");
        break;
    case 4:
        printf("My sources say no.\n");
        break;
    case 5:
        printf("Very doubtful.\n");
        break;
    case 6:
        printf("Most likely. \n");
        break;
    case 7:
        printf("Signs point to yes.\n");
        break;
    case 8:
        printf("You may rely on it.\n");
        break;
    }
    printf("\n");

    return 0;
}