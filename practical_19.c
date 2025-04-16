#include<stdio.h>


void printarr(int ar[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", ar[i]);
    }
}


void insert(int ar[], int where, int value, int ar_size){
    for(int i=ar_size; i>where; i--){
        ar[i] = ar[i-1];
    }


    ar[where] = value;
}


void update(int ar[], int what, int value){
    ar[what] = value;
}


void delete(int ar[], int where, int ar_size){
    for(int i=where; i<ar_size-1; i++){
        ar[i] = ar[i+1];
    }
}


void search(int ar[], int find, int ar_size){
    for(int i=0; i<ar_size; i++){
        if(ar[i] == find){
            printf("Element %d found at index %d", find, i);
            return;
        } 
    }
    printf("Element %d not found in the array!", find);
}


int main()
{
    int size, insert_what, insert_index, update_index, update_value, delete_index, search_value;


    printf("Enter the size of array: ");
    scanf("%d",&size);


    int arr[size]; //Setting an array with a a particular size


    for(int i=0; i<size; i++){ //for loop to input values in an array
        int inp=0;
        printf("Enter %dth value: ", i+1);
        scanf("%d",&inp);
        arr[i] = inp;
    }


    printf("\nPrinting Array: \n");
    printarr(arr,size); //function to print array


    //Inserting into array
    printf("\n\nWhere you want to insert (index): ");
    scanf("%d", &insert_index);
    printf("What you want to insert: ");
    scanf("%d", &insert_what);


    printf("\nInserted array: \n");
    insert(arr, insert_index, insert_what, size); //function call for inserting a value in an array
    printarr(arr, size+1); //printing inserted array


    //Updating an array
    printf("\n\nWhat you want to update (index): ");
    scanf("%d", &update_index);
    printf("Enter an Update Value: ");
    scanf("%d", &update_value);


    printf("\nUpdated Array:\n"); 
    update(arr, update_index,update_value); //function call for updating an array
    printarr(arr, size+1);


    //Delete an index value in an array
    printf("\n\nWhich index value you want to delete?: ");
    scanf("%d", &delete_index);
    delete(arr, delete_index, size+1); //function call for Deleting an element from an array
    printarr(arr, size);


    //Search from an array
    printf("\n\nWhat do you want to search?: ");
    scanf("%d", &search_value);
    search(arr,search_value,size); //function call for searching an element in an array
    return 0;
}
