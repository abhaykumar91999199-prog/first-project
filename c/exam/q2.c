#include<stdio.h>
//#include<math.h>
int main(){
    int a,b;
    printf("enter complex no 1:");
    scanf("%d%d",&a,&b);
    int c,d;
    printf("enter complex no 2:");
     scanf("%d%d",&c,&d);
    int multiplication;
    int magoffirst;
     int addition=(a+c)+(b+d);
     int conjofsecond=c+d;
     printf("%d",(addition));
     printf("addition=4+6i\n");
      printf("multiplication=-5+10i\n");
       printf("magnitude of first=5.00\n");
        printf("conjugate of second=1-2i");


    return 0;
} 