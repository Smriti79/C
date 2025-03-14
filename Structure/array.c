#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{ ///user defined data type
    int hp;
    int speed;
    int attack;
    char tier; // G, S, A, B, C, D
    char name[15];
} pokemon ;

pokemon arr[3];
strcpy(arr[0].name,"Pikachu");
arr[0].attack=100;
arr[0].hp=80;
arr[0].speed=70;
arr[0].tier='A';

strcpy(arr[1].name,"Charizard");
arr[1].attack=150;
arr[1].hp=100;
arr[1].speed=200;
arr[1].tier='S';

strcpy(arr[2].name,"Mewtwo");
arr[2].attack=180;
arr[2].hp=150;
arr[2].speed=250;
arr[2].tier='G';

for(int i=0;i<3;i++){
printf("Name:%s Hp:%d Attack:%d Speed:%d Tier:%c\n",arr[i].name,arr[i].hp,arr[i].attack,arr[i].speed,arr[i].tier);
}
return 0;
}