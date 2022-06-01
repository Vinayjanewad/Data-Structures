// C program to add 2 numbers using pointers
#include<stdio.h>
#include<stdlib.h>

void AddP(int *p, int *q, int *r)
{
    *r=*p+*q;
    printf("\nSum=%d",*r);
    printf("\n%d",r);
}
void main()
{
    int a,b,sum=0;
    int *p,*q,*r;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("\nEnter value of b:");
    scanf("%d",&b);
    p=&a;
    q=&b;
    r=&sum;
    AddP(p,q,r);
}