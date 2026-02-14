#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokimon {
    int attack;
    int hp;
    int speed;
    char tier;
    char name[50];
}pokimon;
pokimon a,b,c;
a.attack=12;
a.hp=12;
a.speed=67;
a.tier='A';
strcpy(a.name,"abhay");

b=a;//b me sb chala gya
printf("%d\n",b.speed);
printf("%d\n",c.speed);//garbage value
printf("%d\n",c.attack);
if(a.attack==b.attack) printf("equal");//here not use a==b for condition
else printf("no");
return 0;
}