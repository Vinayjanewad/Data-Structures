#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee
{
    char name[20];
    int id;
}
emp;

void Read(emp a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter emplpoyee name and id for employee-%d:",i+1);
        scanf("%s\t%d",a[i].name,&a[i].id);
    }
}

void Disp(emp a[], int n)
{
    int i;
    printf("\nEmployee details are:");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%d",a[i].name,a[i].id);
    }
}

void main()
{
    int n;
    emp a[20];
    printf("Enter the number of employees");
    scanf("%d",&n);
    Read(a,n);
    Disp(a,n);
}