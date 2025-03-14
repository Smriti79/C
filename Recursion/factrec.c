#include <stdio.h>

// int factorial(int n){
//     int fact=1;
// for(int i=2;i<=n;i++){
//     fact=fact*i;
// }
// return fact;
// }

int factorial(int n){
if(n==1 || n==0) return 1;   //base case
int ans = n*factorial(n-1);
return ans;
}
int main(){
   int n;
   printf("Enter the number:\n");
   scanf("%d",&n);
  int fact=factorial(n);
   printf("%d",fact);
    return 0;
}