#include<stdio.h>
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter a num :: ");
    scanf("%d",&n);
    printf("\n factorial of %d is : %d",n,factorial(n));

    return 0;
}