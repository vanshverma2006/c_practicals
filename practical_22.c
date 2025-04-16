#include<stdio.h>

void inp(int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("[%d][%d] : ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void multiplyArr(int n, int m, int arr1[][m], int arr2[][m], int finalArr[][m]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            finalArr[i][j] = 0;
            for (int k = 0; k < m; k++){
                finalArr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void print2D(int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("enter rows : ");
    scanf("%d", &n);
    printf("enter col. : ");
    scanf("%d", &m);
    int arr1[n][m], arr2[m][n], finalArr[n][n]; 

    inp(n, m, arr1);
    inp(m, n, arr2); 

    multiplyArr(n, m, arr1, arr2, finalArr);
    print2D(n, n, finalArr);
    return 0;
}