#include<stdio.h>
int main(){
    int arr[][2]={1,2,4,6,7,8};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",arr[i][j]);

        }
        printf("\n");

    }
    return 0;
}