/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>

int main()
{
    float num1,num2;
    char menu;
    while (1)
    {
        printf("\n a. Addition");
        printf("\n b. Subtraction");
        printf("\n c. Multiplication");
        printf("\n d. Division");
        printf("\n e. Exit");
        printf("\n\nEnter Your Choice: ");
        scanf("%c",&menu);

        switch (menu)
        {
            case 'a':
                printf("\nEnter Two Numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nSum of %.2f + %.2f= %.2f.",num1,num2,num1+num2);
                break;
            case 'b':
                printf("\nEnter Two Numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nDifference of %.2f - %.2f= %.2f.",num1,num2,num1-num2);
                break;
            case 'c':
                printf("\nEnter Two Numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nProduct of %.2f X %.2f= %.2f.",num1,num2,num1*num2);
                break;
            case 'd':
                printf("\nEnter Two Numbers: ");
                scanf("%f %f",&num1,&num2);
                printf("\nDivision of %.2f/%.2f= %.2f.",num1,num2,num1/num2);
                break;
            case 'e':
                break;
            default:
                printf("\n\nInvalid Choice, Please Enter value bwteen a to e.");
        }
        printf("\n");
        if (menu=='e')
            break;
    }

    printf("Thankyou, Exit Successfully");
    return 0;
}