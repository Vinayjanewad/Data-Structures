#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Tax paid by person %d:", i+1);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[50], int n)
{
    int i;
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
    printf("\nThe average Tax collected is: Rs.%f",avg);

    for(j=0;j<n;j++)
    {
        if(a[j]>250000)
            count1++;
        else if(a[j]>=50000 && a[j]<=150000) 
            count2++;
    }
    printf("\nNumber of payers who paid tax more than Rs.2.5lakhs is:%d",count1);
    printf("\nNumber of payers who paid tax between Rs.50000 and Rs.150000 is:%d",count2);
}

void main()
{
    int n, a[50], sum=0;
    printf("Enter number of tax payers:");
    scanf("%d", &n);
    ReadArray(a,n);
    DisplayArray(a,n);
    AvgArray(a,n,sum);
}