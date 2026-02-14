#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(int i=0;i<=n-1;i++){
        printf("enter the number %d\n",i+1);
        scanf("%d",&arr[i]);
      }
      for(int i=0;i<=n-1;i++){
if(arr[i]%2!=0) arr[i]*=2;
else arr[i]+=10;
      }
for(int i=0;i<=n-1;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}