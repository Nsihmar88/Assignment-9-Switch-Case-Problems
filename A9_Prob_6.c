//Program to check whether a year is a leap year or not. Using switch statement.

#include<stdio.h>

int main()
{
    int year, remainder;

    printf("Enter Year: ");
    scanf("%d",&year);

    remainder=((year%4==0)&&((year%400==0)||(year%100!=0)));

    switch(remainder)
    {

        case 1:
            printf("Leap Year");
            break;
        case 0:
            printf("Not a Leap Year");
            break;
        default:
            printf("Invalid");
            break;
    }
    printf("\n");
    return 0;
}