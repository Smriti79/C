#include <stdio.h>
// void greeting(int n){
// for(int i=0;i<=n;i++){
// printf("Good Morning\n");
// }
// return;
// }

void dec(int n){
    if(n==0) return;
printf("%d ",n);
dec(n-1);
return;
}
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("\n");
    dec(n);
    return 0;
}