#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n]; 
    for(int i=0;i<=n-1;i++){
     printf("enter the number %d\n",i+1);
     scanf("%d",&arr[i]);
    }
    int sum =0;
   for(int i=0;i<=4;i++){
    sum=sum+arr[i];
    
   }
    printf("%d",sum);
   
    return 0;
}