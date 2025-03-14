#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{ ///user defined data type
    int hp;
    int speed;
    int attack;
    char tier; // G, S, A, B, C, D
    char name[20];
} pokemon ;
pokemon a,b,c;
strcpy(a.name,"Laprus");
a.attack=100;
a.hp=80;
a.speed=50;
a.tier='A';

b = a; //deep copy

printf("%s\n",b.name);
printf("%d",b.attack);
return 0;
}