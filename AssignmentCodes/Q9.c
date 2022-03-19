#include<stdio.h>
#include<stdlib.h>

void ReadArray(int n,int a[50])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the marks of student-%d:", i+1);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int n,int a[50])
{
    int i;
    printf("\nThe marks of students are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void CheckMarks(int n,int a[50])
{
    int i,count1=0,co=0,ce=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            ce++;
        else
            co++;
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==10)
        {
            count1++;
            printf("\nCongratulations student-%d!! You have scored 100/100 Marks",i+1);
        }
    }
    printf("\nThe number of students who scored even marks is:%d",ce);
    printf("\nThe number of students who scored odd marks is:%d",co);
    printf("\nThe number of students who scored 100/100 marks is:%d",count1);
}
void main()
{
    int n, a[50];
    printf("Enter the number of students:");
    scanf("%d",&n);
    ReadArray(n,a);
    DisplayArray(n,a);
    CheckMarks(n,a);
}