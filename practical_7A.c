#include<stdio.h>
void swap(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("%d%d",*a,*b);
    
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}