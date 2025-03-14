#include<stdio.h>
#include<string.h>

int main(){
     char str[50];
puts("Enter a string");
scanf("%[^\n]s",str);
 
//size
int size=0;
int k=0;
while (str[k]!='\0')
{
    size++;
    k++;
}
printf("The size is : %d",size);
for(int i=0,j=size-1;i<=j;i++,j--){
char temp=str[i];
str[i]=str[j];
str[j]=temp;
}
puts("\nThe reverse string is :"); // automatically gives \n
puts(str);
    return 0;
}

