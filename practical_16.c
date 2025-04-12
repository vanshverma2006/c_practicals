#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check Armstrong
int isArmstrong(int num) {
    int original = num, result = 0, digits = 0;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        result += pow(digit, digits);
        temp /= 10;
    }

    return result == original;
}

// Function to check perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is not a Prime number.\n", number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    if (isPerfect(number))
        printf("%d is a Perfect number.\n", number);
    else
        printf("%d is not a Perfect number.\n", number);

    return 0;
}