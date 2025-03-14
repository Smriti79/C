#include <stdio.h>
//parameterised
void inc(int x,int n){
    if(x>n) return;
printf("%d ",x);
inc(x+1,n);
return;
}
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("\n");
    inc(1,n);
    return 0;
}