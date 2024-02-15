#include <stdio.h>

void main1()
{
    int arr1[5] = {100, 200, 300, 400, 500};

    // int len1 = sizeof(arr1);

    // for (int i=0;i<len1;i++)
    // {
    //     printf("The element at index[%d] is %d\n",i,arr1[i]);
    // }

    int length_of_array = sizeof(arr1)/sizeof(arr1[0]);

    for (int i=0;i<length_of_array;i++)
    {
        printf("The element at index[%d] is %d\n",i,arr1[i]);
    }

    //int arr2[] = {101,102,103,104,105,106,107,108};

}

// interchabge the value at arr[0] and arr[2]
void main2()
{
    int array[] = {100, 200, 300};
    printf("element at array location 0 = %d\n", array[0]);
    printf("element at array location 2 = %d\n", array[2]);
    // this is not allowed gives the memory address
    // printf("the old array %d",array);
    int x = array[0];
    array[0] = array[2];
    array[2] = x;
    // printf("the new array %d",array[]);
    printf("element at array location 0 = %d\n", array[0]);
    printf("element at array location 2 = %d\n", array[2]);
}

void evenArrayPrint()
{
    int arr[10] = {3,2,5,6,7,9,10,80,9,23};
    int len_of_array = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<len_of_array; i++){
        if (arr[i]%2 == 0){
            printf("the even element is %d\n", arr[i]);
        }
    }
}

void reverseArray(){
    // reverse the array
    int array1[] = {3,5,6,2};
    int array2[] = {3,5,6,2};

    int lengthOfArray = sizeof(array1)/sizeof(array1[0]);
    for (int i=(lengthOfArray-1); i>=0; i--){
        //printf("%d\n",array1[i]);
        int max_index = lengthOfArray-1;
        array2[i] = array1[max_index-i];
    }
    for (int j = 0; j<lengthOfArray; j++){
        printf("%d\n",array2[j]);
    }
}



// int a = 5;
// int b = 6;
// void swap(int x, int y)
// {
//     printf("The value of x before swapping = %d\n",x);
//     printf("The value of y before swapping = %d\n",y);
//     int temp = 0;
//     temp = x;
//     x = y;
//     y = temp;
//     printf("The value of x after swapping  = %d\n",x);
//     printf("The value of y after swapping = %d\n",y);
// }

// void swap2()
// {
//     printf("The value of a before swapping = %d\n",a);
//     printf("The value of b before swapping = %d\n",b);
//     int temp = 0;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("The value of a after swapping  = %d\n",a);
//     printf("The value of b after swapping = %d\n",b);
// }

void swap3(int* pointer2a,int* pointer2b)
{
    printf("The value of a before swapping = %d\n",*pointer2a);
    printf("The value of b before swapping = %d\n",*pointer2b);
    int temp = 0;
    temp = *pointer2a;
    *pointer2a = *pointer2b;
    *pointer2b = temp;
    printf("The value of a after swapping  = %d\n",*pointer2a);
    printf("The value of b after swapping = %d\n",*pointer2b);
}

void main()
{
    // int arr1[] = {1};
    // printf("%d\n",arr1[0]);
    // // appending elements in array
    // arr1[1] = 2;
    // printf("%d\n",arr1[1]);
    int a = 5;
    int b = 6;
    printf("The value of a = %d\n",a);
    //a=5
    printf("The value of b = %d\n",b);
    //b=6
    // swap(a,b);
    // swap2();
    swap3(&a,&b);
    printf("The value of a after swapping  = %d\n",a);
    //a=5
    printf("The value of b after swapping = %d\n",b);
    //b=6
}