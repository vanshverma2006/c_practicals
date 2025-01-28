#include <stdio.h>
#include <math.h> 

int main() {
    double u, a, t, V, S, T, H, b, c, p;

    // V = u + at
    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);
    printf("Enter acceleration (a): ");
    scanf("%lf", &a);
    printf("Enter time (t): ");
    scanf("%lf", &t);
    V = u + a * t;
    printf("Result of V = u + at: %.2f\n", V);

    // S = ut + 1/2 * at^2
    S = u * t + 0.5 * a * t * t;
    printf("Result of S = ut + 1/2 * at^2: %.2f\n", S);

    // T = 2 * a + √(b) + 9 * c
    printf("Enter value for b: ");
    scanf("%lf", &b);
    printf("Enter value for c: ");
    scanf("%lf", &c);
    T = 2 * a + sqrt(b) + 9 * c;
    printf("Result of T = 2 * a + √b + 9 * c: %.2f\n", T);

    // H = √(b^2 + p^2)
    printf("Enter value for p: ");
    scanf("%lf", &p);
    H = sqrt(b * b + p * p);
    printf("Result of H = √(b^2 + p^2): %.2f\n", H);

    return 0;
}