#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %dth element of the array:", i);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[20], int n)
{
    int i;
    printf("\nOriginal array is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void ReverseArray(int a[20],int n)
{
    int i;
    printf("\nThe reversed array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[20];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    ReverseArray(a,n);
}