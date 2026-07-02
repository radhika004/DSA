// # include <stdio.h>

// int fun(int n){
//   if (n>0){
//     printf("%d",n);
//     fun(n-1);
//     fun(n-1);
//     // printf("%d",n);
//   }
// }
// int main(){
//     int x = 3;
//     fun(x);


  
// }


// natural no. sum

#include <stdio.h>

int fun(int m, int n){
    if(n == 0)
        return 1;

    if(n % 2 == 0){
        return fun(m*m, n/2);
    }

    return m * fun(m*m, (n-1)/2);
}
  




int main(){
  int x =2;
  int y =3;
  printf("%d", fun(x,y)); 
  
}