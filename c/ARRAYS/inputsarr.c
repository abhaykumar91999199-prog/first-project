#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("the array %d is\n",i+1);
        scanf("%d",&arr[i]);

    }
   for(int i=0;i<=n-1;i++)
   printf("%d",arr[i]);
    return 0;
}