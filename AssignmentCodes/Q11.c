#include<stdio.h>
#include<stdlib.h>

void ReadArray(int units[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the units consumed by flat-%d:", i+1);
        scanf("%d", &units[i]);
    }
}


void DisplayArray(int units[50], int n)
{
    int i;
    printf("\nThe list of units consumed by each flat is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",units[i]);
    }
}

void Bill(int units[50], int n)
{
    int i;
    float bill;
    printf("\nThe total bill amount to be paid by each flat is:\n");
    for(i=0;i<n;i++)
    {
        if(units[i]>=0 && units[i]<=100)
            bill=units[i]*1.5;
        else if(units[i]>=101 && units[i]<=250)
            bill=100*1.5 + 2.3*(units[i]-100);
        else if(units[i]>=251 && units[i]<=600)
            bill=100*1.5 + 2.3*250 + 4.0*(units[i]-250);
        else if(units[i]>600)
            bill=100*1.5 + 2.3*250 + 4.0*600 + 5.5*(units[i]-600);
        printf("%0.2f\t",bill);
    }
}
void main()
{
    int units[50],n;
    printf("Enter the number of flats:");
    scanf("%d",&n);
    ReadArray(units,n);
    DisplayArray(units,n);
    Bill(units,n);
}