#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Smriti";
    // char s2[]="Shikha";
// 2nd index pe "B"
printf("%s\n",s1);

for(int i=7;i>=2;i--){
s1[i+2]=s1[i];
}
s1[2]='B';
s1[3]='O';
s1[4]='M';
s1[5]='B';

printf("%s\n",s1);

    // strcat(s1,s2);
    // printf("%s",s1);
    // int x=strlen(s1); //length
  
    // strcpy(s2,s1); //copy
    // s2[0]='M';
    
    // printf("%d\n",x);
    // printf("%s",s2);
    
    return 0;
}