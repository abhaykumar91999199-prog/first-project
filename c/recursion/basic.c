#include<stdio.h>
int factorial(int n){
    if(n==1||n==0) return 1;//base case
    return n*factorial(n-1);
    // int factorial=1;
    // for(int i=1;i<=n;i++){
    //     factorial=factorial*i;
    // }
    // return factorial;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);

    return 0;
}