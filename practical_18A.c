#include<stdio.h>
void swapv(int a ,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap num 1 : %d , num 2 : %d",a,b);


}
int main(){
    int a,b;
    printf("\nenter value of num 1 : ");
    scanf("%d",&a);
    printf("\nenter value of num 2 : ");
    scanf("%d",&b);
    printf("\nbefore swap num 1 : %d , num 2 : %d",a,b);
   swapv(a,b);

    return 0;
}