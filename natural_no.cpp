#include <stdio.h>

int fun(int n){
  if(n==0)
    return 0;
  return fun(n-1)+n;
  }

int isum(int n)
{
  int s = 0;
  int i;
  for(i=1;i<=n;i++)
     s = s +i;
  return s;
}


int main()
{
  int r;
  r = fun(5);
  printf("%d",r);
  return 0;
  
}
