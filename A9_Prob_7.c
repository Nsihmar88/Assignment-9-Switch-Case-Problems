/*  
    Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition. 
    Using the switch statement.
    For the first 50 units Rs. 0.50/unit
    For the next 100 units Rs. 0.75/unit
    For the next 100 units Rs. 1.20/unit
    For units above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>

int main()
{
    float unit,result;
    int x;

    printf("\nEnter number of Electricity Unit Consumed: ");
    scanf("%f",&unit);

    if (unit>=0 && unit<=50)
        x=1;
    else if (unit>=51 && unit<=150)
        x=2;
    else if (unit>=151 && unit<=250)
        x=3;
    else if (unit>250)    
        x=4;
        
    
    switch (x)
    {
        case 1:
            result=((unit*0.50)+((unit*0.50)*.20));
            printf("\nElectricity Unit Consumed are %.2f total electricity bill is Rupees %.2f",unit,result);
            break;
        case 2:
            result=((unit*0.75)+((unit*0.75)*.20));
            printf("\nElectricity Unit Consumed are %.2f total electricity bill is Rupees %.2f",unit,result);
            break;
        case 3:
            result=((unit*1.20)+((unit*1.20)*.20));
            printf("\nElectricity Unit Consumed are %.2f total electricity bill is Rupees %.2f",unit,result);
            break;
        case 4:
            result=((unit*1.50)+((unit*1.50)*.20));
            printf("\nElectricity Unit Consumed are %.2f total electricity bill is Rupees %.2f",unit,result);
            break;    
        default:
            printf("value must be equal to or grater then 0.");
    }

    printf("\n");
    return 0;
}