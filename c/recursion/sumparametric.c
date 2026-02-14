// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=1;i<=n;i++){
//         a=a+i;
//     }
//     printf("%d",a);
//     return 0;
// }
#include<stdio.h>
int sum(int n){
    if(n==1) return n;
    int a=n+sum(n-1);
    return a;

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=sum(n);
    printf("%d",a);
    return 0;
}