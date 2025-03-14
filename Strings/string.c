#include<stdio.h>

int main(){
    
    // char arr[] = {"Hello World\0"};
     char str[] = {"Hello World"};
 
 str[0]='M';
 str[1]=97;
 
 int i=0;
 while (str[i]!='\0')
 {
//    printf("%c",str[i]);
     printf("%c",*(str+i));
   i++;
 }
 printf("\n");
 printf("%c",str[8]);
    return 0;
}

