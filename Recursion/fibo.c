#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    // int a = fibo(n-1);
    // int b = fibo(n-2);
    // int ans = a+b;
    return fibo(n-1) + fibo(n-2);
}

int main(){
  int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
printf("%d", fibo(n));
    return 0;
}