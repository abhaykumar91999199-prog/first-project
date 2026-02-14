#include<stdio.h>
int main(){
    float a,b;

    printf("enter the number:");
    scanf("%f%f",&a,&b);
    int n;
    printf("enter the operation(+,-,*,/):");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("add:%f\n",(a+b));break;
        case 2:
        printf("sub:%f\n",(a-b));break;
        case 3:
        printf("product:%f\n",(a*b));break;
        case 4:
       if(b!=0)
        printf("div:%f\n",a/b);
       else printf("error\n");
       break;
      default:
      printf("invalide operation\n");
    }
    return 0;
}