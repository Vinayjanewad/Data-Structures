#include <stdio.h>
#include <stdlib.h>

void ReadArray(int n,int a[20])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %dth element of the array:", i);
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int n,int a[20])
{
    int i;
    printf("The array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void Search(int n,int a[20], int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
       printf("\nThe number %d is found at position %d in the array",key,i+1);
    else
        printf("\nThe number %d is not found in the array",key);

}   
void main()
{
    int n,a[20];
    int key;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    ReadArray(n,a);
    printf("Enter the number to search :");
    scanf("%d",&key);
    DisplayArray(n,a);
    Search(n,a,key);
}