#include<stdio.h>
#include<string.h>

int main(){
 typedef struct cricketer{
        char firstname[20];
        char lastname[20];
        int age;
        int matches; 
        float avg;
    } cricketer ;

 cricketer arr[3];
for(int i=0;i<3;i++){
    // gets(arr[i].name);
    scanf("%s",&arr[i].firstname);
    scanf("%s",&arr[i].lastname);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].matches);
    scanf("%f",&arr[i].avg);
}
for(int i=0;i<3;i++){
    printf("Name:%s %s \nAge:%d \nNo.of matches:%d \nAverage:%.f\n",arr[i].firstname,arr[i].lastname,arr[i].age,arr[i].matches,arr[i].avg);
}
    return 0;
}