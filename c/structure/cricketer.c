#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[55];
        int age;
        int noofmatches;
        float average;
    } cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].average);
         

    }
    for(int i=0;i<3;i++){
         printf("NAME:%s\n",arr[i].name);
        printf("AGE:%d\n",arr[i].age);
        printf("NO OF MATCHES:%d\n",arr[i].noofmatches);
        printf("AVERAGE:%f\n",arr[i].average);
         printf("\n");
    }


    return 0;
}