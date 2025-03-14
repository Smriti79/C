#include<stdio.h>

int main(){
struct pokemon{ ///user defined data type
    int hp;
    int speed;
    int attack;
    char tier; // G, S, A, B, C, D
} pikachu ,charizard ,mewtwo ;

// struct pokemon pikachu;
// pikachu.attack = 60;
printf("Enter attack of pikachu: ");
scanf("%d",&pikachu.attack);
pikachu.hp = 50;
pikachu.speed = 100;
pikachu.tier = 'A';

// struct pokemon charizard;
charizard.attack = 130;
charizard.hp = 80;
charizard.speed = 80;
charizard.tier = 'S';

// struct pokemon mewtwo;
mewtwo.attack = 170;
mewtwo.hp = 150;
mewtwo.speed = 200;
mewtwo.tier = 'G';

printf("%d\n",pikachu.attack);
   printf("%c",mewtwo.tier); 


return 0;
}