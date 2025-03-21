#include<stdio.h>
void swapr(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;


}
int main(){
    int a,b;
    int *p=&a,*q=&b;
    printf("\nenter value of num 1 : ");
    scanf("%d",&a);
    printf("\nenter value of num 2 : ");
    scanf("%d",&b);
    printf("address of a : %p\naddress of b : %p",p,q);
    printf("\nbefore swap num 1 : %d , num 2 : %d",a,b);
    swapr(&a,&b);
    printf("\nafter swap num 1 : %d , num 2 : %d",a,b);
    return 0;
}