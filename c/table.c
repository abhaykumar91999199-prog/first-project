#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=n;i<=10*n;i+=n){
     printf("%d\n",i);
    }
     
   // printf("\n");
    return 0;
}