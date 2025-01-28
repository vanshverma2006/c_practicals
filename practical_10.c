#include<stdio.h>
int main(){
    int i=0,sum=0,n;
    printf("enter value of n :: ");
    scanf("%d",&n);
    while(i<=n){ 
        sum+=i;
        i++;
    }
    printf("sum is :: %d",sum);
    return 0;
}