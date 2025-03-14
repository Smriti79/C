#include <stdio.h>

int maze(int m,int n){
    if(m==1 && n==1) return 1;
    int rightway=0;
    int downway=0;
    if(m==1){
        // can't go down ,only right
        rightway += maze(m,n-1);
    }
     if(n==1){
        // can't go right ,only down
        downway += maze(m-1,n);
    }
    if(m>1 && n>1){
        rightway += maze(m,n-1);
        downway += maze(m-1,n);
    }
 int totways = rightway + downway;
 return totways;
}
int main(){
    int m,n;
    printf("Enter rows of maze: ");
    scanf("%d",&m);
    printf("Enter columns of maze: ");
    scanf("%d",&n);
   int ways = maze(m,n);
   printf("%d",ways);

   return 0;
   }


