#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[25], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %dth element of the array:", i);
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[25], int n)
{
    int i;
    printf("\nArray is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void Sum(int a[25],int n,int m)
{
    int i=0,j=0;
    for(i=0;i<n-m;i++)
    {
         int sum=0;
        for(j=i+1;j<m+i+1;j++)
    {
        sum=sum+a[j];
    }
     printf("\nFor position %d, sum= %d\n",i+1,sum);
    }
}

void main()
{
    int a[25],n,m;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the value of m:");
    scanf("%d",&m);
    ReadArray(a,n);
    DisplayArray(a,n);
    Sum(a,n,m);
}