#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high){
    int leftsize = mid-low+1;
    int rightsize = high-mid;
    
    int * leftArray = (int*)malloc(leftsize*sizeof(int));
    int * rightArray = (int*)malloc(rightsize*sizeof(int));
    
    for(int i=0; i<leftsize; i++){
        leftArray[i] = arr[i+low];
    }
    for(int j=0; j<rightsize; j++){
        rightArray[j] = arr[mid+1+j];
    }
    
    int i=0, j=0, k=low;
    while(i<leftsize && j<rightsize){
        if(leftArray[i]<=rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        } else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    
    while(i<leftsize){
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    
    while(j<rightsize){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
    
    free(leftArray);
    free(rightArray);
    
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    printf("Given array: \n");
    printArray(arr, len);
    
    mergeSort(arr, 0, len-1);
    
    printf("Sorted array:\n");
    printArray(arr, len);
}
