#include<stdio.h>
int main(){
     char a[]="abhay\0";
     char b[]="abhaykumar\0";
     int i=0;
     int j=0;
     while(a[i]!='\0'){
        i=i+1;

     }
     printf("%d\n",i);
     while(b[j]!='\0'){
        j=j+1;

     }
     printf("%d\n",j);

    return 0;
}