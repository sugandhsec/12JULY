#include <stdio.h>
int main()
{
    int a;
    int b;
    int a1, a2, a3, a4, a5;
    int final = 0;
    printf("--------------------------------------\n");
    printf("--------------------------------------\n");
    printf("     -- $ FOOD BILLING SYSTEM $ --         \n");
    printf("--------------------------------------\n");
    printf("--------------------------------------\n\n");

    printf("         WELCOME TO OUR SHOP          \n\n");

l1:
    printf("Which food you like it : \n");
    printf("1. Apple\t          Price = 100 Rs/Pcs\n");
    printf("2. Pizza \t          Price = 150 Rs/Pcs\n");
    printf("3. French Frice\t          Price = 80 Rs/Pcs\n");
    printf("4. Vadapav\t          Price = 40 Rs/Pcs\n");
    printf("5. Samosa\t          Price = 50 Rs/Pcs\n\n");

    printf("Please Select Food Option Which You Like It : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("--------------------------------------\n");
        printf("       You Have Selected Apple        \n");
        printf("--------------------------------------\n");
        printf("Please Enter Quantity : ");
        scanf("%d", &b);
        a1 = 100 * b;

        printf("Your Amount is : %d\n", a1);
        final = final + a1;
        printf("YOUR FINAL AMOUNT IS = %d\n", final);

        break;
    case 2:
        printf("--------------------------------------\n");
        printf("       You Have Selected Pizza        \n");
        printf("--------------------------------------\n");
        printf("Please Enter Quantity : ");
        scanf("%d", &b);
        a2 = 150 * b;
        printf("Your Amount is : %d\n", a2);
        final = final + a2;

        printf("YOUR FINAL AMOUNT IS = %d\n", final);
        break;
    case 3:
        printf("--------------------------------------\n");
        printf("       You Have Selected French Frice        \n");
        printf("--------------------------------------\n");
        printf("Please Enter Quantity : ");
        scanf("%d", &b);
        a3 = 80 * b;
        printf("Your Amount is : %d\n", a3);
        final = final + a3;

        printf("YOUR FINAL AMOUNT IS = %d\n", final);
        break;
    case 4:
        printf("--------------------------------------\n");
        printf("       You Have Selected Vadapav        \n");
        printf("--------------------------------------\n");
        printf("Please Enter Quantity : ");
        scanf("%d", &b);
        a4 = 40 * b;
        printf("Your Amount is : %d\n", a4);
        final = final + a4;

        printf("YOUR FINAL AMOUNT IS = %d\n", final);
        break;

    case 5:
        printf("--------------------------------------\n");
        printf("       You Have Selected Samosa        \n");
        printf("--------------------------------------\n");
        printf("Please Enter Quantity : ");
        scanf("%d", &b);
        a5 = 50 * b;
        printf("Your Amount is : %d\n", a5);
        final = final + a5;

        printf("YOUR FINAL AMOUNT IS = %d\n", final);
        break;

    default:
        printf("Please Enter valid Option : \n");
        break;
    }

    printf("\n--------------------------------------\n");
    printf("       Do You Like Place More Orders ?        \n");
    printf("--------------------------------------\n");
    int c;
    printf("Please Select Option : \n");
    printf("1. YES\n");
    printf("2. NO\n");
    scanf("%d", &c);

    if (c == 1)
    {
        goto l1;
    }
    else
    {
        printf("--------------------------------------\n");
        printf("       THANK YOU VISIT AGAIN        \n");
        printf("--------------------------------------\n");
    }
    return 0;
}