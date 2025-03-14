#include<stdio.h>
int stair(int n){ 
    if(n<=2) return n;  
    if(n==3) return n+1;
                    
   int ways = stair(n-1) + stair(n-2) + stair(n-3);
             
   
    return ways;
}

int main(){
  int n;
    printf("Enter the number of stairs: \n");
    scanf("%d",&n);                                   
    printf("You have %d ways to climb %d stairs", stair(n),n);
    return 0;
}