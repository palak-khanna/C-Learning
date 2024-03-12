#include <stdio.h>

/* ARRAY OPERATIONS 
- CREATION
- TRAVERSING
- INSERTING AT ANY POSITION
- DELETION AT ANY POSITION
- insertion and deletion at any position cannot happen in case of arrays, because arrays are contiguous or fix-sized hence the given insertiona nd deletion are made 
- in copies of new array, these are just smaple to insert and delete at beginning and end.
- BUBBLE SORT
*/

void display(int arr1[], int size) {
    printf("\n----DISPLAY ARRAY----\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}

void delete_beg(int arr1[], int size){
    int new_size = size-1;
    int arr[new_size];
    
    for(int i=0; i<new_size; i++){
        arr[i]= arr1[i+1];
    };
    
    display(arr, new_size);
}


void delete_end(int arr1[], int size){
    int new_size = size-1;
    int arr[new_size];
    
    for(int i=0; i<new_size; i++){
        arr[i]= arr1[i];
    };
    
    display(arr, new_size);
}

void insert_end(int arr1[], int size)
{
    printf("\n----INSERTION IN THE END----\n");
    
    int new_size = size+1;
    int arr[new_size];
    
    int ele_to_insert;
    printf("Enter the element to insert in the end: ");
    scanf("%d",&ele_to_insert);
    for(int i=0; i<size; i++){
        arr[i] = arr1[i];
    };
    
    arr[new_size-1] = ele_to_insert;
    display(arr,new_size);
}

void insert_beg(int arr1[], int size)
{
    printf("\n----INSERTION IN THE BEGINNING----\n");
    
    int new_size = size+1;
    int arr[new_size];
    
    int ele_to_insert;
    printf("Enter the element to insert in the end: ");
    scanf("%d",&ele_to_insert);
    
    arr[0] = ele_to_insert;
    
    for(int i=1; i<size+1; i++){
        arr[i] = arr1[i];
    };
    display(arr, new_size);
}

void insertion_pos(int arr1[], int size){
    int num, data;
    printf("enter the position to append: ");
    scanf("%d",&num);
    
    printf("enter the data to append: ");
    scanf("%d",&data);
    printf("\n");
    
    int new_size = size+1;
    int arr[new_size];
    
    int count=0;
    for(int i=0; i<new_size;i++){
        count++;
        while(count!=num){
            arr[i] = arr1[i];
            printf("value array here is %d\n",arr[i]);
            printf("value of i here is %d\n",i);
            break;
        };
        if(count==num){
            arr[i] = data;
            printf("value array in here is %d\n",arr[i]);
            // i++;
            printf("value of i here is %d\n",i);
        }
        else{
            arr[i+1] = arr1[i];
            printf("value array in here is %d\n",arr[i]);
            // i++;
            printf("value of i here is %d\n",i);
        }
            
        printf("value here is %d\n\n",arr[i]);
    };
    display(arr, new_size);
}

void bubble_sort(int array1[], int count){
    printf("\n----BUBBLE SORT----\n");
    // printf("%d\n",count);
    display(array1,count);
    for (int j=0; j<count-1; j++){
        for(int i=0; i<count-j-1; i++){
            if(array1[i]>array1[i+1]){
                int temp = array1[i];
                array1[i]= array1[i+1];
                array1[i+1] = temp;
            }
        };
    };
    printf("Array sorted: \n");
    display(array1,count);
}

int main() {
    int size;
    printf("Enter the size of array to create : ");
    scanf("%d", &size);
    
    int arr[size];
    for(int i = 0; i < size; i++) {
        int ele;
        printf("enter element: ");
        scanf("%d",&ele);
        arr[i] = ele;
    }
    
    display(arr, size);
    // bubble_sort(arr, size);
    // insert_end(arr,size);
    // insert_beg(arr,size);
    insertion_pos(arr, size);
    
    return 0;
}
