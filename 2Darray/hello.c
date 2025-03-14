#include <stdio.h>

void swap(int *a,int *b){
    int tmp;
    tmp = *a;
    *a=*b;
    *b=tmp;
}
int main ()
{
   
  int a, b;
  printf("I am learning C\n");
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("Before Swapping : a=%d,b=%d\n",a,b);

  swap(&a,&b);

  printf("After Swapping : a=%d,b=%d\n",a,b);
  return 0;
}
 

