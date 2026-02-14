  #include<stdio.h>
 int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){//for space
            printf("   ");
        }
        int a=1;
        nsp=nsp-1;
        for(int j=1;j<=nst;j++){
            char ch =(char)(a+64);
            printf(" %c ",ch);
            a++;  
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
 }