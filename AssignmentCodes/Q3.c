#include<stdio.h>
#include<stdlib.h>

void ReadArray(int exp[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the experience of employee-%d:", i+1);
        scanf("%d", &exp[i]);
    }
}


void DisplayArray(int exp[50], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",exp[i]);
    }
}

void Salary(int exp[50], int n)
{
    float salary;
    int i;
    printf("\nThe salary of the employees after getting the bonus is:\n");
    for(i=0;i<n;i++)
    {
        if(exp[i]>=5 && exp[i]<=7)
            salary=10600+(10600*0.1);
        else if(exp[i]>=8 && exp[i]<=10)
            salary=21300+(21300*0.2);
        else if(exp[i]>10)
            salary=32100+(32100*0.3);
        printf("%0.2f\t",salary);
    }
}
void main()
{
    int n,exp[50];
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    ReadArray(exp,n);
    DisplayArray(exp,n);
    Salary(exp,n);
}