#include<stdio.h>
int main(){
    int a,b;
    printf("enter num 1 :: ");
    scanf("%d",&a);
    printf("enter num 2 :: ");
    scanf("%d",&b);
    printf("before swapping");
    printf("\nnum1 :: %d, num 2 :: %d",a,b);
    int temp ;
    temp=a;
    a=b;
    b=temp;
    printf("\nnum1 :: %d, num 2 :: %d",a,b);
    return 0;
}