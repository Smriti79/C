#include<stdio.h>
typedef int* pointer;

int main(){
int x = 5;
int y = 3;
pointer a=&x,b=&y;
printf("%p\n",a);
printf("%p",b);
//    int* a=&x;
//    int* b=&y;
    return 0;
}