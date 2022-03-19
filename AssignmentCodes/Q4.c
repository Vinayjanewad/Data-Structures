#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the marks of student-%d:", i+1);
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[50], int n)
{
    int i;
    printf("\nThe marks of %d students are:",n);
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void  AvgArray(int a[50], int n, int sum)
{
    int i, j, count1=0, count2=0;
    float avg=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("\nThe average is:%f",avg);
    for(i=0;i<n;i++)
    {
        if(a[i]<avg)
            count1++;
        else
            count2++;
    }
    printf("\nNumber of students who scored more than average is:%d",count1);
    printf("\nNumber of students who scored less than average is:%d",count2);
}
void main()
{
    int  n,a[50],sum=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    AvgArray(a,n,sum);
}