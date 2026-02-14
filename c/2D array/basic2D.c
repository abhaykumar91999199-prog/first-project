// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the row:");
//     scanf("%d",&r);
//         int c;
//     printf("enter the row:");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
             
//             scanf("%d",&arr[i][j]);
             
//         }
//     }
//         printf("\n");
    
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }





#include<stdio.h>
int main(){
    int a[3][4]={1,2,3,4,5,6,7,8,9,5,2,3};
    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
           printf("%d ",a[i][j]);
       }
      printf("\n");
    }
    int x=0;
    for(int j=0;j<4;j++){
        x=x+a[0][j];
    }
    int y=0;
    for(int j=0;j<4;j++){
        y=y+a[1][j];
    }
    int z=0;
    for(int j=0;j<4;j++){
        z=z+a[2][j];
    }
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    
    return 0;
}