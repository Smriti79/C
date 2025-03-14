#include<stdio.h>
#include<string.h>



int main(){
typedef struct {
    int age;
    float weight;
 } person;

person per1,per2;

 per1.age=50;
 per1.weight=65;
 per2.age=48;
 per2.weight=60;

printf("%d\n",per1.age);
printf("%.2f\n",per2.weight);
person* x=&per1;
person* y=&per2;

x->age=70;
y->weight=75;

// per1.age=70;
// per2.weight=75;

printf("%d\n",per1.age);
printf("%.2f",per2.weight);
    return 0;
}