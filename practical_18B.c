#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}
int main(){
    int a,b;
    printf("\nenter value of num 1 : ");
    scanf("%d",&a);
    printf("\nenter value of num 2 : ");
    scanf("%d",&b);
    printf("\nbefore swap num 1 : %d , num 2 : %d",a,b);
    swap(&a,&b);
    printf("\nafter swap num 1 : %d , num 2 : %d",a,b);
    return 0;
}