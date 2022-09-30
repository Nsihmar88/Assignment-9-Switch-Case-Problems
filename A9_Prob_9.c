/*  
    Program to Convert even number into its upper nearest odd number Switch Statement.
*/

#include<stdio.h>

int main()
{
    int num,x=1;

    while (x!=0)
    {
        printf("\nEnter even number to Convert into its upper nearest odd number: ");
        scanf("%d",&num);        
        
        x=num%2;
        switch (x)
        {
            case 0:
                num=(num+1);
                printf("\nUpper nearest odd number is %d",num);
                break;
            default:
                printf("\ninvalid input");
        }
        if(x==0)
            break;
    }

    printf("\n");
    return 0;
}