#include<stdio.h>
#include<string.h>

int main(){

 typedef struct student{
        char name[20];
        int marks; 
    } student ;

 student arr[2];
 strcpy(arr[0].name,"Babluu");
arr[0].marks=100;
 strcpy(arr[1].name,"Munnaa");
arr[1].marks=90;
printf("Student Data\n");
for(int i=0;i<2;i++){
    printf("Name:%s  Marks:%d\n",arr[i].name,arr[i].marks);
}
    return 0;
}