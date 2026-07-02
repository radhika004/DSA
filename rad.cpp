// recursion 
// # include<stdio.h>
// void fun(int n){
//   if (n>0){
//     printf("%d ",n);
//     fun(n-1);
//   }
// }

// int main(){
//   int x = 3;
//   fun(x);
//   return 0;
// }


// recursion with static and global variable

#include <stdio.h>
 int fun(int n){
  static int x=0;
  if (n>0){
    x++;
    return fun(n-1)+x;

  }
  return 0;

 }
 int main(){
  int r;
  r = fun(5);
  printf("%d\n",r);
  return 0;
 }