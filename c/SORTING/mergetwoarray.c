#include<stdio.h>
int main(){
    int n=7;
    int m=8;
    int arr[7]={1,2,3,4,5,6,7};
     int brr[8]={1,2,3,4,5,6,7,0};
     int merge[n+m];
     for(int i=0;i<n;i++){
        merge[i]=arr[i];
     }
     for(int i=0;i<m;i++){
        merge[n+i]=brr[i];
     }
     for(int i=0;i<n+m;i++){
        printf("%d ",merge[i]);
     }
   //   for(int ele:merge){
   //    printf("%d ",ele);
   //   }      //for each loop nai hota hai
    return 0;
}