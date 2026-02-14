#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int m;
    printf("enter the number:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
          printf("\n");// har line ke badd ek enter krne ke liye hai
    }
    return 0;
}