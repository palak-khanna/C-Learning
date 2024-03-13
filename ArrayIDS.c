#include <stdio.h>

#define max 10

void insertElement(int arr[], int size, int element, int position) {
    if (size >= max) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }
    
    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
        return;
    }
    
    // Shift elements to the right to make room for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[position] = element;
    
    // Increase the size of the array
    size++;
    
    printf("Element inserted successfully.\n");
}

int main() {
    int arr[max] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int position = 2;
    
    insertElement(arr, size, element, position);
    
    // Print the array after insertion
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
/*Deletion in an Array:

To delete an element from an array, you need to follow these steps:

Determine the position of the element you want to delete.
Shift all elements from that position to the left by one place to fill the gap left by the deleted element.
Here's a sample C code for deletion:
*/

#include <stdio.h>

#define max 10

void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.\n");
        return;
    }
    
    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrease the size of the array
    size--;
    
    printf("Element deleted successfully.\n");
}

int main() {
    int arr[max] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 2;
    
    deleteElement(arr, size, position);
    
    // Print the array after deletion
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
/*
Searching in an Array:

To search for an element in an array, you need to iterate through the array and compare each element with the target element.

Here's a sample C code for searching:
*/
#include <stdio.h>

#define max 10

int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[max] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;
    
    int index = searchElement(arr, size, target);
    
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found.\n", target);
    }
    
    return 0;
}
These are basic implementations. Depending on the specific requirements and constraints of your application, you may need to modify them accordingly.





