#include<stdio.h>
int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9};
    int n=9,pos1=5,value1=100,pos2=6,value2=200;
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
    for(int i=n;i>pos1;i--){
    arr[i]=arr[i-1];
    }
    arr[pos1]=value1;
    n++;

    for(int i=n;i>pos2;i--){
    arr[i]=arr[i-1];
    }
    arr[pos2]=value2;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
