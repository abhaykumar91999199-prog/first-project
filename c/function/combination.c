#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int r;
printf("enter the number:");
scanf("%d",&r);
int nfact=factorial(n);//n!
int rfact=factorial(r);//r!
int nrfact=factorial(n-r);//n-r!

int ncr=nfact/(rfact*nrfact);//int a=factorial(n)/[factorial(r)*factorial(n-r)]
printf("%d",ncr);//printf("%d" a);
return 0;
}