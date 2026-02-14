#include<stdio.h>
int maze(int n, int m){

    int rightways=0;
    int leftways=0;
    if(n==1 && m==1) return 1;
    if(n==1){//cannot go down
        rightways+=maze(n,m-1);
    }
    if(m==1){//cannot go right
        leftways+=maze(n-1,m);
    }
    if(n>1 && m>1){
         rightways+=maze(n,m-1);
          leftways+=maze(n-1,m);

    }
    int a=rightways+leftways;
    return a;

}
int main(){
     int n;
    printf("enter the row:");
    scanf("%d",&n);
    int m;
    printf("enter the column:");
    scanf("%d",&m);
    int totalways=maze(n,m);
    printf("%d",totalways);
    return 0;
}