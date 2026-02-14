#include<stdio.h>
int main(){
    int arr[5]={5,6,3,0,9};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //bubble sorting
    for(int i=0;i<n-1;i++){// for purpose of passed 
        for(int j=0;j<n-2;j++){
          if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
             arr[j]=temp;
          }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}