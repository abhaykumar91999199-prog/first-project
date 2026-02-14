#include<stdio.h>
int main(){
    int arr[6]={14,23,20,56,78,20};
    int x=100;
    for(int i=0;i<=5;i++){
        if(arr[i]==x){
            printf("%d is present in this array and its index is %d\n",x,i);
           
            
        }
        else printf("%d is not present in this array",x);
    break;
}
    
    return 0;
}