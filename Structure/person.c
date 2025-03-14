#include<stdio.h>
#include<string.h>
int main(){
 struct person{
    char name[50];
    float salary;
    int age;
 } per1,per2;

 strcpy(per1.name,"Bablu");
 per1.age=50;
 per1.salary=45000;
printf("%s\n",per1.name);
// printf("%d\n",per1.age);
// printf("%.3f\n",per1.salary);
 strcpy(per2.name,"Munna");
 per1.age=480;
 per1.salary=40000.5;
// printf("%s\n",per2.name);
printf("%d\n",per2.age);
// printf("%.3f\n",per2.salary);

    return 0;
}