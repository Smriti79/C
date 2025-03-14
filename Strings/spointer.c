#include<stdio.h>
#include<string.h>

// int main(){
//     //  char str[]="Smriti shikha";
// char* ptr = "Physics Wallah";// read only memory //&str[0]; //ptr points to str
//     int i=0;
//     while (*ptr!='\0')
//  {
//      printf("%c",*ptr);
//      ptr++;
//    i++;
//  }
//     return 0;
// }

int main(){
char str[]="College Wallah";
char* ptr=str;
ptr="Physics Wallah";
printf("%s\n",str);
printf("%s",ptr);
    return 0;
}