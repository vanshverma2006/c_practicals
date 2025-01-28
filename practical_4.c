#include<stdio.h>
int main(){
    float radius,pi,area,circumference;
    pi=3.14;
    printf("enter value of radius :: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("\narea :: %.2f",area);
    printf("\ncircumference :: %.2f",circumference);
    return 0;
}
