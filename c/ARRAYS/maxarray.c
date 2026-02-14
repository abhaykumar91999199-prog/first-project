#include<stdio.h>
int main(){
    int arr[5]={1,4,7,8,-10};
    int max=arr[0];//sabse se chhota no
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}