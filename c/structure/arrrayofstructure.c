#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokimon{
    int attack;
    int hp;
    int speed;
    char tier;
    char name[50];
}pokiman;
pokiman arr[3];
arr[0].attack=40;
arr[0].hp=100;
arr[0].speed=60;
arr[0].tier='A';
strcpy(arr[0].name,"mohan");

arr[1].attack=40;
arr[1].hp=100;
arr[1].speed=60;
arr[1].tier='A';
strcpy(arr[1].name,"mohani");

arr[2].attack=40;
arr[2].hp=100;
arr[2].speed=60;
arr[2].tier='A';
strcpy(arr[2].name,"moha");

for(int i=0;i<3;i++){
    printf("attack:%d\n",arr[i].attack);
     printf("HP:%d\n",arr[i].hp);
      printf("speed:%d\n",arr[i].speed);
       printf("tier:%c\n",arr[i].tier);
        printf("name:%s\n",arr[i].name);

}


    return 0;
}