/*
    Write a menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle or not
    d. Exit

*/

#include<stdio.h>

int main()
{
    int l1,l2,l3;
    char menu;

    while (1)
    {
        printf("\n a. Check whether a given set of three numbers are lengths of an isosceles triangle or not?: ");
        printf("\n b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not?: ");
        printf("\n c. Check whether a given set of three numbers are equilateral triangle or not?: ");
        printf("\n d. Exit");
        printf("\n\nEnter Your Choice: ");
        scanf("%c",&menu);

            switch (menu)
            {
                case 'a':
                    printf("\nEnter Three Numbers: ");
                    scanf("%d%d%d",&l1,&l2,&l3);
                    if (l1==l2 || l2==l3 || l1==l3)
                        printf("\nNumbers are lengths of an isosceles triangle");
                    else
                        printf("\nNumbers are not lengths of an isosceles triangle");
                    break;
                case 'b':
                    printf("\nEnter Three Numbers: ");
                    scanf("%d%d%d",&l1,&l2,&l3);
                    if ((l1*l1==l2*l2+l3*l3) || (l2*l2==l1*l1+l3*l3)|| (l3*l3==l2*l2+l1*l1))
                        printf("\nNumbers are lengths of sides of a Right Angled Triangle");
                    else
                        printf("\nNumbers are not lengths of sides of a Right Angled Triangle");
                    break;
                case 'c':
                    printf("\nEnter Three Numbers: ");
                    scanf("%d%d%d",&l1,&l2,&l3);
                    if (l1==l2 && l2==l3)
                        printf("\nNumbers are lengths of sides of Equilateral Triangle");
                    else
                        printf("\nNumbers are not lengths of sides of Equilateral Triangle");
                    break;
                case 'd':
                    break;
                default:
                    printf("\n\nInvalid choice!");
            }    
        printf("\n");
        if (menu=='d')
            break;
    }

    printf("Thankyou, Exit Successfully");
    return 0;
}