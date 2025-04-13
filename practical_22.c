#include<stdio.h>
void inputArray(int n,int m,int arr[][m]){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void multiplication(int n,int m,int arr[][m]){
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("\n%d X %d : %d",arr[i][i],arr[i][j],arr[i][i]*arr[i][j]);
        }
    }
}

int main(){
    int n,m;
    printf("enter value of n : ");
    scanf("%d",&n);
    printf("enter value of m : ");
    scanf("%d",&m);
    int arr[n][m];
    inputArray(n,m,arr);
    multiplication(n,m,arr);
    return 0;
}