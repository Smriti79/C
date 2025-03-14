#include<stdio.h>
#include<string.h>
 // deep copy

int main(){
char s1[]="College Wallah";
// char s2[]="College Wallah";
int size=0;
while (s1[size]!='\0')
{
    size++;
}
char s2[size + 1];
for(int i=0;i<size;i++){
    s2[i]=s1[i];
}
s2[size]='\0';
printf("Original string: %s\n",s1);
printf("Copied string: %s\n",s2);
    return 0;
}