#include<stdio.h>
void pointer(int * a ){
    *a=24;
}
int main(){
    int a=12;
    printf("\nvalue before function call : %d",a);
    pointer(&a);
    printf("\nvalue after function call : %d",a);
    return 0;
}