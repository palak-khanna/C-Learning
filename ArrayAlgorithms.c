#include <stdio.h>

/* ARRAY OPERATIONS 
- CREATION
- TRAVERSING
- INSERTING AT ANY POSITION
- DELETION AT ANY POSITION
- SEARCHING
- BUBBLE SORT
*/

void display(int arr1[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}

int creation_arr(int size) {
    printf("Enter the size of array to create : ");
    scanf("%d", &size);
    
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i + 3;
    }
    
    display(arr, size);
    
    return 0;
}

void insert_end(int arr1[], int size)
{
    int new_size = size+1;
    int arr[new_size];
    
    int ele_to_insert;
    printf("Enter the element to insert in the end: ");
    scanf("%d",&ele_to_insert);
    for(int i=0; i<size; i++){
        arr[i] = arr1[i];
    };
    
    arr[new_size-1] = ele_to_insert;
}

// int count(int arr1[]){
//     return sizeof(arr1[])/sizeof(arr1[1]);
// }

void main(){
    int array1[] = {1,2,6,4,5};
    int count = sizeof(array1)/sizeof(array1[1]);
    display(array1,count);
    for (int j=0; j<count; j++){
        for(int i=0; i<count-1; i++){
            if(array1[i]>array1[i+1]){
                int temp = array1[i];
                array1[i]= array1[i+1];
                array1[i+1] = temp;
            }
            printf("Inside the loop: ");
            display(array1,count);
        };
    };
}
