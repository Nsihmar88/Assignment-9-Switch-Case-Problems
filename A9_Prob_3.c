//Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>

int main()
{
    int num;
    
    printf("\n\nEnter day number of week to check message: ");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("\nHappy Monday! Have a beautiful day! ");
            break;
        case 2:
            printf("\nGood Morning My Friend, Have a Beautiful Tuesday. ");
            break;
        case 3:
            printf("\nEvery sunrise is a gift. Accept it, live it and enjoy it. Have a great Wednesday! ");
            break;
        case 4:
            printf("\nBe thankful to God for giving you another day to enjoy life. Happy Thursday! ");
            break;
        case 5:
            printf("Good Morning Friday. May your cup overflow with peace, love and pure AWESOMENESS today!");
            break;
        case 6:
            printf("\nAs it is Saturday, be like a bird and spread the wings of your dreams in the sky. Wish you a happy Saturday!");
            break;
        case 7:
            printf("\nAs it's Saturday again, I hope you get to spend more time with yourself, your family, and friends.");
            break;
        default:
            printf("\n\nInvalid input, Please Enter value bwteen 1 to 7.\nRe-run the program, thankyou.");
    }
    printf("\n");
    return 0;
}