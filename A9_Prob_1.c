//Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>

int main()
{
    int month, day,x;

    printf("\nEnter month number to check number of days: ");
    scanf("%d",&month);

    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        x=1;
        day=31;
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {   
        x=2;
        day=30;
    }
    else if (month==2)
    {   
        x=3;
        day=28;
    }
    switch (x)
    {
        case 1:
            printf("\n%d Days in Month.",day);
            break;
        case 2:
            printf("\n%d Days in Month.",day);
            break;
        case 3:
            printf("\nNon Leap Year %d/29 In Leap Days in Month.",day);
            break;    
        default:
            printf("\nInvalid input, Please Enter value bwteen 1 to 12.");
            
    }

    printf("\n");
    return 0;
}