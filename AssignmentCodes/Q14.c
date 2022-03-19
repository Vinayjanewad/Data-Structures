#include <stdio.h>

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
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void Equilibrium(int a[25], int n)
{
    int i, j,ind=-1;
    int leftsum, rightsum;
    for (i = 0; i < n; ++i)
    {
        leftsum = 0;
        for (j = 0; j < i; j++)
            leftsum += a[j];
        rightsum = 0;
        for (j = i + 1; j < n; j++)
            rightsum += a[j];
        if (leftsum == rightsum)
            ind=i;
    }
    if(ind==-1)
        printf("\nThere is  no equilibrium index for the given array");
    else
        printf("\nEquilibrium index of the given array is:%d",ind);
}
void main()
{
    int a[25], n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    ReadArray(a, n);
    Equilibrium(a, n);
}