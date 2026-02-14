#include<stdio.h>
int main(){
    int arr[6]={'a','b','c','e','f','g'};
    int n=6;
    for(int i=0;i<6;i++){
        if(arr[i]=='e') printf("%d\n",i);
        if(arr[i]=='g')printf("%d",i);
    }
    
    return 0;
}