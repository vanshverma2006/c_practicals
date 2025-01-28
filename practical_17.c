#include<stdio.h>
float area(float);
float circumference(float);
float area(float radius){
    float pi=3.14;
    float area;
    area=pi*radius*radius;
    return area;
}
float circumference(float radius){
    float pi=3.14;
    float circumference;
    circumference=2*pi*radius;
    return circumference;
}
int main(){
    float radius;
    printf("enter value of radius : ");
    scanf("%f",&radius);
    printf("\n%.2f",area(radius));
    printf("\n%.2f",circumference(radius));

    return 0;
}