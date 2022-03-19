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
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void Maxdigit(int a[25],int n)
{
    int i,s;
    int first,mid,last,sum,largest;
    sum = 0;

    for(i=0;i<n;i++)
    {
        first = a[i]/100;
        s  = a[i]%100;
        last = s % 10;
        mid = s/10;
        if(first > mid && first > last)
            largest = first;
        if(mid > first && mid > last)
            largest = mid;
        if(last > first && last > mid)
            largest = last;

        printf("\n Maximum digit in a[%d] is %d ",i,largest);
        sum = sum + largest;
    }
    printf("\nSum of largest is : %d ",sum);
}

void main()
{
    int a[25],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    Maxdigit(a,n);
}