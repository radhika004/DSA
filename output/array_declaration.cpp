#include <stdio.h>

int main()
{
  
  // int B[5]={1,2,3,4};
  // int C[10]= {2,4,6};
  // int D[5] = {0};
  // int E[] = {1,2,3,4,5,6};
  // int i;
  // for (i=0;i<5;i++)
  //     printf("%u \n",&A[i]);

  int A[5];
  int *p;
  p = new int[5];
  p[0]=5;
  printf("%d",p[0]);


  return 0;

}
