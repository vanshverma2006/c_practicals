#include<stdio.h>
int main()
{
    int a,b,c;


    printf("Enter value of a: ");
    scanf("%d",&a);
    
    printf("Enter value of b: ");
    scanf("%d",&b);


    printf("Enter value of c: ");
    scanf("%d",&c);


    printf("Greatest among A=%d, B=%d and C=%d is: ", a,b,c);
    
    (a>b && a>c) ? printf("A is greatest") : ((b>a && b>c) ? printf("B is greatest"): printf("C is greatest"));


    return 0;
}
