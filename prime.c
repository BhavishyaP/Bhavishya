#include<stdio.h>
void main()
{
  int p=0,n,i;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      p++;
    }
  }
  if(p==2)
  {
    printf("Given number %d is a prime",n);
  }  
  else
  {
    printf("Given number %d is not a prime ",n);
  }  
} 
