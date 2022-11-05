#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

/* variables:
n = name
cn = company name
p = position
nh = number of hours
pg = paygrade
tr = taxrate
d = deductions */

main()
{
    char ans;
    char n[30], cn[30], p[30]; // kulang ng asteris at 0
    float ot, M, E, T, P, S, nh, pg, tr, sss = 200, pagibig = 100, otp, ps, withholdingTax, d, ns;
repeat:
    printf("Enter your name here ");
    scanf("%s", &n);
    printf("\nEnter the name of your company here ");
    scanf("%s", &cn);
    printf("\nEnter the number of hours you worked ");
    scanf("%f", &nh);
    printf("\nType your position code ");
    scanf("%s", &p);

    if (p == "M") // quotations
    {
        pg = 6500;
        tr = 0.05;
    }
    else if (p == "E")
    {
        pg = 7500;
        tr = 0.06;
    }
    else if (p == "T")
    {
        pg = 8500;
        tr = 0.07;
    }
    else if (p == "P")
    {
        pg = 10500;
        tr = 0.08;
    }
    else
    {
        pg = 12500;
        tr = 0.09;
    }

    ps = otp;
    withholdingTax = ps * tr;
    d = sss + pagibig + withholdingTax;
    ns = ps - d;

    /* position, hours worked, overtime pay, pay grade, deductions, and net salary.
    The user can input and process data as he wants.*/

    printf("\nName %s", n);
    printf("\nCompany %s", cn);
    printf("\nPay Grade %0.2f ", pg);
    printf("\nOvertime Pay %0.2f ", otp);
    printf("\nDeductions %0.2f ", d);
    printf("\nNet Salary %0.2f ", ns);

ask:
    printf("\nDo you want to continue (Yy/Nn)? ");
    ans = tolower(getch());
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
}