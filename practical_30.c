
#include<stdio.h>


struct employees{
    char Fname[25], Lname[25];
    int age, empid;
};


int main(){
    int tot_emp = 5;
    struct employees emp[tot_emp];


    int eid = 100;


    for(int i=0; i<tot_emp; i++){
        emp[i].empid = eid;
        eid++;
        printf("Enter First Name of Employee %d: ", i+1);
        scanf("%s",&emp[i].Fname);
        printf("Enter Last Name of Employee %d: ", i+1);
        scanf("%s",&emp[i].Lname);
        printf("Enter Age of Employee %d: ", i+1);
        scanf("%d",&emp[i].age);
    }


    printf("\n");
    
    for(int i=0; i<tot_emp; i++){
        printf("Printing Data for Employee %d...\n",i+1);
        printf("Employee ID: %d\n",emp[i].empid);
        printf("First Name: %s\n",emp[i].Fname);
        printf("Last Name: %s\n",emp[i].Lname);
        printf("Age: %d\n",emp[i].age);
        printf("\n");
    }
    return 0;
}




