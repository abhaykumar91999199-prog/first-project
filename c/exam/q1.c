#include<stdio.h>
int main(){
    int x,y;
    printf("enter rows and columns for matrix A:");
    scanf("%d%d",&x,&y);
    int a[x][y];
    printf("enter the matrix A\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
       scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("%d",a[x][y]);
    
    int k,l;;
    printf("enter rows and columns for matrix b:");
    scanf("%d%d",&k,&l);
    int b[k][l];
    printf("enter the matrix B\n:");
    for(int n=0;n<k;n++){
        for(int m=0;m<l;m++){
            scanf("%d ",&b[n][m]);
        }
        printf("\n");
        
    }
    printf("%d",b[k][l]);

    int add=a[x][y]+b[k][l];
    int prod=a[x][y]*b[k][l];
    printf("%d\n ",add);
    printf("%d\n ",prod);

    return 0;
}
