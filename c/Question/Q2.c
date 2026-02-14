// #include<stdio.h>
// int main(){ 
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         printf("enter the array %d\n",i+1);
//         scanf("%d",&arr[i]);
//        }
//        int sum =0;
//        for(int i=0;i<=n-1;i++){
//         sum =sum +arr[i];

//        }
//        printf("%d",sum);

//     return 0;
// }




//BITWISE OPERATION
#include<stdio.h>
int main(){
    int a=5;
    int b=3;
    printf("AND:%d\n",a&b);
    printf("OR:%d\n",a|b);
    printf("XOR:%d\n",a^b);
    printf("NOT:%d\n",~a);
    printf("a<<1:%d\n",a<<1);
    printf("a>>1:%d\n",a>>1);
    return 0;
}