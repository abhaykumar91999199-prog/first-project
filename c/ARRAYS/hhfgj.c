  #include<stdio.h>
 int main(){
     int t;
     scanf("%d",&t);
     for(int i=1;i<=t;i++){
         int a;
         scanf("%d",&a);
         for(int j=1;j<=a;j++){
             int b,c;
             scanf("%d%d",&b,&c);
             int x=b/c;
             int n;
             int arr[n];
             for(int n=1;n<=j;j++ ){
                scanf("%d",&arr[n]) ;
             }
             int max=arr[1];
             if(max<arr[n]){
                 max=arr[n];
             }
             printf("%d",n);
         }
     }
     return 0;
 }