#include<stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter a num :: ");
    scanf("%d",&n);
    printf("\n sum of %d natural num is : %d",n,sum(n));

    return 0;
}