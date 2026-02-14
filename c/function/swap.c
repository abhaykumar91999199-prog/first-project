#include<stdio.h>
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
     int b;
    printf("enter b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    //int temp=a;
    //a=b;
   // b=temp;
    printf("the value of a is %d\n",a);
    printf("the value of  is  %d",b);
    return 0;
}