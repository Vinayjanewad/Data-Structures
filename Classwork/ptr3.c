#include<stdio.h>
#include<stdlib.h>

void Biggest(int *p, int *q)
{
    if(*p>*q)
        printf("\n%d is the biggest",*p);    
    else
        printf("\n%d is the biggest",*q); 
}
void main()
{
    int a,b;
    int *p,*q;
    printf("Enter 1st number and 2nd number: ");
    scanf("%d\t%d",&a,&b);
    p=&a;
    q=&b;
    Biggest(p,q);
}