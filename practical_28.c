#include<stdio.h>


struct Distance
{
    int feet;
    double inches;
};
int main(){ 
    struct Distance d1, d2, sum;


    printf("Enter 1st Distance (Feet & inches): ");
    scanf("%d %lf",&d1.feet, &d1.inches);


    printf("Enter 2nd Distance (Feet & inches): ");
    scanf("%d %lf",&d2.feet, &d2.inches);


    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;


    if(sum.inches >= 12.0){
        int fadd;
        double inmod;


        fadd = sum.inches/12;
        sum.feet += fadd;


        inmod = sum.inches/12;
        inmod = (inmod - fadd)*12;
        sum.inches = inmod;


        printf("Sum of Distances are: %d' %.0lf''", sum.feet, sum.inches);
    } else{
        printf("Sum of Distances are: %d' %.0lf''", sum.feet, sum.inches);
    }
    return 0;
}


