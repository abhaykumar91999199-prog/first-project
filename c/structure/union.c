#include<stdio.h>
#include<string.h>
int main(){
     union ram{
        int height;
        long weight;
        char grade;
        char name[100];
    };
     union ram mohan;
     mohan.grade='b';
     mohan.height=5;
     mohan.weight=70;
     strcpy(mohan.name,"MOHAN KUMAR");
     printf("%s\n",mohan.name);
     printf("%c\n",mohan.grade);
     printf("%d\n",mohan.height);
     printf("%d",mohan.weight);
      
     


    
    
    
    
    return 0;
}