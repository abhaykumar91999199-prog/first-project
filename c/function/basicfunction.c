#include<stdio.h>
void dhurki(){
    printf("you are from dhurki\n");
    return;
}
void garhwa(){
    printf("you are from garhwa\n");
    dhurki();
    return;

}
void ranchi(){
    printf("you are from ranchi\n");
    garhwa();
    return;
}
int main(){
    ranchi();
    return 0;
}
