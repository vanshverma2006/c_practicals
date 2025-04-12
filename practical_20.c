#include<stdio.h>
void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\nenter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}
int sum(int arr[],int n){
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum ;
}
int main (){
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    printf("%d",sum(arr,n));
    return 0;
}