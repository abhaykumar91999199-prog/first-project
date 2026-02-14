 #include<stdio.h>
 int main(){
    int marks[10]={95,65,23,85,34,31,25,68,100,90};
    for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf("%d\n",i);
    }
}
    printf("\n");
    return 0;
 }