#include<stdio.h>
int main(){
    float num_1,num_2,add,sub,mul,div;
    printf("enter value of num 1 :: ");
    scanf("%f",&num_1);
    printf("\nenter value of num 2 :: ");
    scanf("%f",&num_2);
    add=num_1+num_2;
    printf("\nsum is equal to :: %.2f",add);
    sub=num_1-num_2;
    printf("\nsub is equal to :: %.2f",sub);
    mul=num_1*num_2;
    printf("\nmul is equal to :: %.2f",mul);
    div=num_1/num_2;
    printf("\ndiv is equal to :: %.2f",div); 

    return 0;
}