#include <stdio.h>
#include <math.h>
int main() {
    int n, originalNum, totalnum = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNum = n;

    
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        totalnum++;
    }

    
    temp = n; 
    while (temp > 0) {
        int digit = temp % 10;          
        result += pow(digit, totalnum); 
        temp = temp / 10;               
    }


    if (result == originalNum) {
        printf("ARMSTRONG\n");
    } else {
        printf("NOT ARMSTRONG\n");
    }

    return 0;
}