#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
typedef struct car{
    int attack;
    int hp;
    int speed;
    char tier;
    char name[50];
}car;
typedef struct legendarycar{
    car normal;
    char ability[1000];
}legendarycar;
typedef struct morelegendarycar{
    legendarycar most;
    int gun;
}morelegendarycar;
morelegendarycar a;
a.most.normal.speed=2000;
printf("%d",a.most.normal.speed);

    



return 0;
}
