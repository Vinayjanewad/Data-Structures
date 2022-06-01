#include<stdio.h>
#include<stdlib.h>
int add(int n,int sum)
{
    int i;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void main()
{
    int n,result,sum;
    FILE *pt;
    printf("Enter how many natural numbers to add\n");
    scanf("%d", &n);
    result=add(n,sum);
    printf("%d",result);
    pt=fopen("result_n.txt", "w");
    fprintf(pt, "%d", result);
    fclose(pt);
}