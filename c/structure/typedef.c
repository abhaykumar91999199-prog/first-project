#include<stdio.h>
typedef int number;
typedef char name;
typedef int* pointer;
int main(){
    int x=5,y=10;
    pointer a=&x,b=&y;//int* a=&x
    number z=10;
    name r='A';
    printf("%c\n",r);
    printf("%p\n",a);
    printf("%p\n",b);
    printf("%d",z);
    return 0;
}