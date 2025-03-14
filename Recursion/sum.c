#include <stdio.h>

// void sum(int n,int s){
//     if(n==0) {
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number: \n");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


// --- USING RETURN TYPE --- //

int sum(int n){
if(n==1 || n==0) return n;   //base case
int ans = n+sum(n-1);
return ans;
}
int main(){
   int n;
   printf("Enter the number:\n");
   scanf("%d",&n);
  int fact=sum(n);
   printf("%d",fact);
    return 0;
}