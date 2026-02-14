#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        //for(int j=1;j<=n;j+2){
         printf("%d  ",i);
        //}
       // printf("\n");
    
    }
    
    return 0;
}