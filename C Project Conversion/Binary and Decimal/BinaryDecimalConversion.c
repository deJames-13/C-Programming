#include <stdio.h>
#include <string.h>

int main()
{
    int iOption, iDecimal;
    char iBinary[] = "";
    printf("*****************************************\n");
    printf("*\tBinary - Decimal Conversion\n");
    printf("*****************************************\n");
    printf("\t[Options]\n");
    printf("[1] ->\tDecimal to Binary\n");
    printf("[2] ->\tBinary to Decimal\n");
    printf("*****************************************\n");
    do
    {
        printf("\n->\tChoose an option (0 to quit): ");
        scanf("%d", &iOption);
        switch (iOption)
        {
        case 0:
            printf("\n\t[Process terminated.]\n");
            break;
        case 1:
        repeat:
            printf("Input (-1 to stop): ");
            scanf("%d", &iDecimal);
            if (iDecimal < 0)
            {
                break;
            }

            char current[] = "";
            char temp[64];

            int quot = iDecimal;
            while (quot != 0)
            {
                strcpy(temp, "");
                sprintf(temp, "%d", quot % 2);
                strcat(current, temp);
                strrev(current);

                quot /= 2;
            }

            printf("[Output]: %s\n", current);
            goto repeat;
        case 2:
            printf("Input (-1 to stop): ");
            scanf("%s", &iBinary);
            if (iBinary < 0)
            {
                break;
            }
            char temp2[] = "";
            char current2[] = "";
            for (int i = 0; i < strlen(iBinary); i++)
            {
                printf("%s\n", i);
            }

            // printf("[Output]: %s\n", current);

            break;

        default:
            printf("That is not in the Option!!\n");
            break;
        }
    } while (iOption);

    return 0;
}