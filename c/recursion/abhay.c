
#include<stdio.h>
int main() {
    int w,p,k;
    printf("enter the no:");

    scanf("%d%d%d",&w,&p,&k);
    int n=k-w;
    if( n>=0)
    printf("%d",w*2+n*1);
    
    else printf("%d",k*2);
    
    return 0;
	// your code goes here

}
