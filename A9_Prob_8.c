/*  
    Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
*/

#include<stdio.h>

int main()
{
    int x;
    float num;

    printf("\nEnter number to convert a positive number into a negative number and negative number into a positive number: ");
    scanf("%f",&num);

    if (num>0)
        x=1;
    else if (num<0)
        x=2;
        
    
    switch (x)
    {
        case 1:
            num=(num*(-1));
            printf("\n%.2f",num);
            break;
        case 2:
            num=(num*(-1));
            printf("\n%.2f",num);
            break;   
        default:
            printf("0 is neither Positive nor Negative.");
    }

    printf("\n");
    return 0;
}