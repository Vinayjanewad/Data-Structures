#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the number of days after the deadline for student-%d:", i+1);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[50], int n)
{
    int i;
    printf("\nThe list of days is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void  Penalty(int a[50], int b[50], int n)
{
    int i, j,sum=0,min,max;
    float avg=0;
    for(i=0;i<n;i++)
    {
        b[i]=a[i]*2;
        sum+=b[i];
    }
    printf("\nThe total penalty collected is:Rs.%d",sum);
    avg=sum/n;
    printf("\nThe average penalty collected is:Rs.%0.2f",avg);
    min=max=b[0];
    for(i=0;i<n;i++)
    {
        if(min>b[i])
            min=b[i];
        if(max<b[i])
            max=b[i];
    }
    printf("\nMinimum penalty paid by a student is:Rs.%d",min);
    printf("\nMaximum penalty paid by a student is:Rs.%d",max);
}
void main()
{
    int a[50],b[50],n;
    printf("Enter the number of students who returned the book late:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    Penalty(a,b,n);
}