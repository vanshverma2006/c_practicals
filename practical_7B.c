#include <stdio.h>
int main() {
    int a,b;
    printf("enter num 1 :: ");
    scanf("%d",&a);
    printf("enter num 2 :: ");
    scanf("%d",&b);
    printf("before swapping");
    printf("\nnum1 :: %d, num 2 :: %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nnum1 :: %d, num 2 :: %d",a,b);
    
    return 0;
}