#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int Platform(int a[], int dep[], int n)
{


    int plat= 1, result = 1;
    int i = 1, j = 0;


    for (int i = 0; i < n; i++) {

        plat = 1;

        for (int j = i + 1; j < n; j++)
       {

            if ((a[i] >= a[j] && a[i] <= dep[j]) || (a[j] >= a[i] && a[j] <= dep[i]))
                plat++;
        }

        if(plat > result)
        {
            result = plat;
        }
    }

    return result;
}
void main()
{
    int a[50],d[50],n,res;
    printf("Enter the number of trains:");
    scanf("%d",&n);
    printf("\nEnter arrival times of trains\n");
    ReadArray(a,n);
    printf("\nArrival times of trains are:\n");
    DisplayArray(a,n);
    printf("\nEnter departure times of trains\n");
    ReadArray(d,n);
    printf("\nDeparture times of trains are:\n");
    DisplayArray(d,n);
    res=Platform(a,d,n);
    printf("\nNumber of platforms required is:%d",res);
}