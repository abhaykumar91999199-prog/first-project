#include<stdio.h>
#include<string.h>
int main(){
    struct ram{
        int height;
        int weight;
        char grade;
        char name[100];
    };
     struct ram mohan;
     mohan.grade='A';
     mohan.height=5;
     mohan.weight=70;
     char  ch[12];
     strcpy(ch,"MOHAN KUMAR");
     printf("%s\n",ch);
     struct ram sohan;
     sohan.grade='A';
     sohan.height=5;
     sohan.weight=70;
     printf("%c",sohan.grade);
    return 0;
}