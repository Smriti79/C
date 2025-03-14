#include<stdio.h>

int main(){
    
    char arr[5] = {'a','t','l','a','s'};
   for(int i=0;i<5;i++){
     printf("%c ",arr[i]);
     printf("%p\n",&arr[i]);
   }
    char ch = '9';
     int x=(int)ch;
     printf("%d",x);

   
    return 0;
}


// ASCII VALUES
// A -> 65
// a -> 97
//'0'-> 48
//'9'-> 57

// '\0'  Null character -> 0