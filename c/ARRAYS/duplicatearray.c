// #include<stdio.h>
// int main(){
//     int arr[6]={5,6,7,2,3,6};
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//           if(arr[i]==arr[j]){
//             printf("%d is duplicate array",arr[i]);
//             break;
//           }  }}
          
//     return 0;
// }



#include<stdio.h>
int main(){
int arr[6]={5,6,7,2,3,6};
int brr[6]={0,0,0,0,0,0};
for(int i=0;i<6;i++){
  if(arr[i]==brr[i]){
    printf("%d is duplicate ARRAY",arr[i]);
    break;
  }
  
  else {
 brr[i]=1;

  } 
  i++;
 
}
return 0;
}