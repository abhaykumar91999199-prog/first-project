// #include<stdio.h>
// int main(){
//     int power=1;
//     int a,b;
//     printf("enter the number:");

//     scanf("%d%d",&a,&b);
//     for(int i=1;i<=b;i++){
//         power=power*a;

//     }
//     printf("%d",power);
//     return 0;
// }



// #include<stdio.h>
// int power(int a, int b){
//     if(b==0) return 1;
//    int ans=a*power(a,b-1);

//     return ans;
// }
// int main(){
//     int a;
//     printf("a:");
//     scanf("%d",&a);
//     int b;
//     printf("b:");
//     scanf("%d",&b);
//     int p=power(a,b);
//     printf("%d raised to the power %d:%d",a,b,p);

//     return 0;

// }




#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
   
   int x=power(a,b/2);
   if(b%2==0) //even
   return x*x;
   else return x*x*a;
}
int main(){
    int a;
    printf("a:");
    scanf("%d",&a);
    int b;
    printf("b:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to the power %d:%d",a,b,p);

    return 0;

}