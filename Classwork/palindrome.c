#include<stdio.h>
int palindrome(int num)
{
  int temp, rem, rev=0;
  temp = num;

  while( num!=0 )
  {
     rem = num % 10;
     rev = rev*10 + rem;
     num /= 10;
  }

  if ( rev == temp ) 
    return 0;
  else 
    return 1;
}

int main()
{
  int num;

  printf("Enter a number to check whether it is a palindrome or not : ");
  scanf("%d", &num);

  if(palindrome(num) == 0)
    printf("%d is a palindrome\n",num);
  else
    printf("%d is not a palindrome\n",num);

  return 0;
}
