#include <stdio.h>
#include <stdlib.h>

void ReadArray(int a[12], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the expenditure of month-%d of the year:", i + 1);
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[12], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void AvgArray(int a[12], int n)
{
    int i, sum = 0;
    float avg = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / n;
    printf("\nThe average expenditure is: %0.2f", avg);
}
void Check(int a[12], int n)
{
    int min, max, i, c, d;
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            c = i+1;
        }
        if (max< a[i])
        {
            max = a[i];
            d = i+1;
        }
    }
    printf("\nsmallest:%d", min);
    printf("\nlargest:%d", max);
    printf("\nMonth of the year they spent less is : %d", c);
    printf("\nMonth of the year they spent more is: %d", d);
    printf("\nMonths the they spent more than Rs.35000 are\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] > 35000)
            printf("%d\t", i + 1);
    }
}
void main()
{
    int a[12], n = 12;
    ReadArray(a, n);
    DisplayArray(a, n);
    AvgArray(a, n);
    Check(a, n);
}