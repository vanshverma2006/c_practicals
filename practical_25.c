#include<stdio.h>
#include<string.h>


int stringlen(char str[]){
    return strlen(str);
}


void concatstring(char str[]){
    char str2[100];
    printf("Enter 2nd String: ");
    scanf("%s",str2);


    char str12[200];
    
    strcpy(str12,str);
    strcat(str12,str2);


    printf("%s",str12);
}


void copystring(char str[]){
    char str2[100];
    strcpy(str2,str);
    printf("String 2 i.e. copy of main string is: %s", str2);
}


char comparestring(char str[]){
    char str2[100];
    printf("Enter 2nd String: ");
    scanf("%s",str2);


 if(strcmp(str,str2) == 0){
        printf("Strings are Same!");
    } else{
        printf("Strings are different!");
    }
}


// char reversestring(char str[]){
//     return strrev(str); // Not an inbuit function
// }


int main(){
    char str[100];
    printf("Enter String: ");
    scanf("%s",str);


    printf("\nSelect one of the below option:\n");
    printf("1. String Length\n2. Concatenate 2 Strings\n3. Copy String\n4. Compare String");


    int option;
    printf("\n\nEnter Your Choice: ");
    scanf("%d",&option);


    switch(option){
        case 1:
        printf("String Length is: %d", stringlen(str));
        break;


        case 2:
        concatstring(str);
        break;


        case 3:
        copystring(str);
        break;


        case 4:
        printf("%s",comparestring(str));
        break;


        default:
        printf("Invalid Input!");
        break;
    }
    return 0;
}
