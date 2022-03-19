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
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void Sort(int a[20], int n)
{
    int i,j,temp,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
}

void main()
{
    int n,a[20];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    ReadArray(a, n);
    DisplayArray(a,n);
    Sort(a,n);
}