#include <stdio.h>

void ReadArray(int a[25], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth element of the array:",i);
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[25], int n)
{
    int i;
    printf("Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void ISPerfect(int a[25], int n, int sum)
{

    int i, j, rem;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < a[i]; j++)
        {
            rem = a[i] % j;
            if (rem == 0)
            {
                sum += j;
            }
        }
        if (sum == a[i])
            printf("\n%d is a perfect number\n", a[i]);
        else
            printf("\n%d is not a perfect number\n", a[i]);
    }
}

void main()
{
    int n, a[25], sum = 0;
    printf("enter the size of an array\n");
    scanf("%d", &n);
    ReadArray(a, n);
    DisplayArray(a, n);
    ISPerfect(a, n, sum);
}
