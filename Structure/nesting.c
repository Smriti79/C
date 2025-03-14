#include<stdio.h>
#include<stdbool.h>
int main(){
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

typedef struct legendarypokemon{
    pokemon normal;
char ability[10];
}legend;

typedef struct godpokemon{
   legend legendary;
 char specialattack[10];
}god;

legend mewtwo;
strcpy(mewtwo.ability,"pressure");
mewtwo.normal.speed=200;
mewtwo.normal.hp=150;
mewtwo.normal.attack=100;
mewtwo.normal.tier='G';
strcpy(mewtwo.normal.name,"Mewtwo");
god arceus;
strcpy(arceus.specialattack,"Turn anyone to stone");
strcpy(arceus.legendary.ability,"fly");
arceus.legendary.normal.speed=500;
arceus.legendary.normal.hp=250;
arceus.legendary.normal.attack=300;
arceus.legendary.normal.tier='D';
strcpy(arceus.legendary.normal.name,"Mewtwo");
    return 0;
}