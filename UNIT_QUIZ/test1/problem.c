#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
    // char *productName;
    char productName[30];
    int price = 0, quantity = 0, productTotal = 0;
    int accumulator = 0;

repeat:
    printf("\nEnter product name: ");
    scanf("%s", &productName);
    printf("Enter product price: ");
    scanf("%d", &price);
    printf("Enter product quantity: ");
    scanf("%d", &quantity);

    productTotal = price * quantity;
    accumulator = accumulator + productTotal;

    printf("Added product: %s\n", productName);
    printf("Product quantity: %d\n", quantity);
    printf("Product total value: %d\n", productTotal);

    printf("\nCurrent total value: %d\n", accumulator);

ask:
    printf("\nDo you want to continue (Yy/Nn)? ");
    char ans = tolower(getch());
    if (ans == 'y')
    {
        // system("cls");
        goto repeat;
    }
    else if (ans == 'n')
    {
        printf("\nProgram Exited.");
        exit(0);
    }
    else
    {
        goto ask;
    }

    return 0;
}