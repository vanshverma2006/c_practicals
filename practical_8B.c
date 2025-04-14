#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nenter a num 1 :: ");
    scanf("%d",&a);
    printf("\nenter a num 2 :: ");
    scanf("%d",&b);
    printf("\nenter a num 3 :: ");
    scanf("%d",&c);
    if (a>b && a>c)
    printf("num 1 is greatest");
    else if (b>a && b>c)
    printf("num 2 is greatest");
    else
    printf("num 3 is greatest");
    return 0;
}