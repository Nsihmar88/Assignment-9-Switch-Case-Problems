/*
    Convert the following if-else-if construct into switch case:
    if(var == 1)
    System.out.println("good");
    else if(var == 2)
    System.out.println("better");
    else if(var == 3)
    System.out.println("best");
    else
    System.out.println("invalid");
*/

#include<stdio.h>

int main()
{
    int var;

    printf("\nEnter Number: ");
    scanf("%d",&var);

    switch (var)
    {
        case 1:
            printf("\nGood");
            break;
        case 2:
            printf("\nbetter");
            break;
        case 3:
            printf("\nbest");
            break;    
        default:
            printf("\nInvalid");
    }
    printf("\n");
    return 0;
}