#include<stdio.h>
int main(){
    int arr[5]={12,3,4,5,6};
    int n=4,del=4,pos=2;
    for(int i=5;i<4;i++){
        arr[i]=arr[i+1];
    }
    arr[pos]=del;
    n--;
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}