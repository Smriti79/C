#include<stdio.h>
#include<string.h>

int main(){
char s1[]="College Wallah";
char* s2=s1;  // shallow copy
s1[0]='M';
printf("%s",s2);
    return 0;
}