#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
    char name[50];
    int id;
} emp;

void Read(emp*a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter emplpoyee name and id for employee-%d:",i+1);
        scanf("%s\t%d",(a+i)->name,&(a+i)->id);
    }
}

void Disp(emp*a, int n)
{
    int i;
    printf("\nEmployee details are:");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%d",(a+i)->name,(a+i)->id);
    }
}

void main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    emp *b;
    b=(emp*)malloc(n*sizeof(emp));
    Read(b,n);
    Disp(b,n);
    free(b);
}