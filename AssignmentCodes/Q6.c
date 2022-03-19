#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the rank of student-%d:", i+1);
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

void Sort(int a[50], int n)
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
    printf("\nThe sorted list of ranks of students is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\nThe lowest rank of student is:%d",a[n]);
    printf("\nThe highest rank of student is:%d",a[0]);
}

void main()
{
    int n,a[50];
    printf("Enter number of students:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    Sort(a,n);
}