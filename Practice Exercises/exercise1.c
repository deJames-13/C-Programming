#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

int main(){
repeat:
    system("cls");
    int id = 0, unit = 0;
    float charge = 0, amt = 0, s_amt = 0, net = 0;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your id: ");
    scanf("%d", &id);
    printf("Enter your unit consumed: ");
    scanf("%d", &unit);

    if (unit<=199) {
        charge = 1.20;
    }
    else if (unit>=200&&unit<400) {
        charge = 1.50;
    }
    else if (unit>=400&&unit<600) {
        charge = 1.80;
    }
    else if (unit >= 600){
        charge = 2.00;
    }
    else {
        printf("The minimum bill should be Rs. 100\n");
        goto repeat;
    }
    amt = charge * unit;
    if (unit>400){
        s_amt = amt * .15;
    }
    net = amt + s_amt;

    printf("\n[OUTPUT]\n");
    printf("\nCustome Id No.: %d\n", id);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n\n", unit);

    printf("Amount charges @Rs. %.2f per unit: %.2f\n", charge, amt);
    printf("Surcharge amount: %.2f\n", s_amt);
    printf("Net amount: %.2f\n", net);

ask:
    printf("\nDo you want to continue? (y/n) ");
    char ans = tolower(getch());
    if (ans=='y'){
        goto repeat;
    }
    else if(ans=='n'){
        printf("Program terminated.");
        exit(0);
    }
    else{
        goto ask;
    }

    return 0;
}
