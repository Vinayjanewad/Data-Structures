#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[15], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element of the array\n",i);
        scanf("%d",&a[i]);
    }
}

void DisplayArray(int a[15], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void frequency(int a[15], int n)
{
    int count1=0, count2=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            count1++;
        else if(a[i]>0)
            count2++;
    } 
    printf("\nThe frequency of positive elements is: %d",count1);
    printf("\nThe frequency of negative elements is: %d",count2);

}
void main()
{
    int n,a[15];

    printf("Enter the size of array\n");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    frequency(a,n);
}