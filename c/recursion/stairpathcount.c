#include<stdio.h>
int stair(int a){
    if(a<=2) return a;
    return stair(a-1)+stair(a-2);
}
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",stair(a));
    return 0;
}
