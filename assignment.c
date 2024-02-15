#include <stdio.h>
#define arraySize 5


void addingTwoArrays(){
    // write a prog to add 2 arrays of size 5 and store in new array
    int i;
    int array1[arraySize] = {1,2,3,4,5};
    int array2[arraySize] = {4,6,8,2,3};
    int resultantArray[arraySize];

    for(i=0; i<arraySize; i++){
        resultantArray[i] = array1[i]+array2[i];
    }

    for (int j=0; j<arraySize; j++){
        printf("the element at %d th position is %d\n", j, resultantArray[j]);
    }
    // create a fibbonacci series till 10th no. and store them in a array
    // check if 2 arrays are identical

}

void multiplyingTwoArrays(){
    // multiply 2 arrays store in 3rd array
     int i;
    int array1[arraySize] = {1,2,3,4,5};
    int array2[arraySize] = {4,6,8,2,3};
    int resultantArray[arraySize];

    for(i=0; i<arraySize; i++){
        resultantArray[i] = array1[i]*array2[i];
    }

    for (int j=0; j<arraySize; j++){
        printf("the element at %d th position is %d\n", j, resultantArray[j]);
    }
}

void modulusFunction(){
    // find out array contains how mainy elements <0,>0,=0 in array
    int array1[arraySize] = {-1,3,8,-3,0};
    int c1=0;
    int c2=0;
    int c3=0;

    for(int i=0; i<arraySize; i++){
        if (array1[i]<0){
            c1 = c1+1;
        }
        else if (array1[i]>0)
        {
            c2 = c2+1;
        }
        else if (array1[i]=0)
        {
            c3 = c3+1;
        }
    }
    printf("the number of elements >0 are %d\n",c2);
    printf("the number of elements <0 are %d\n",c1);
    printf("the number of elements =0 are %d\n",c3);
        
}

void checkForIdenticalArrays(){
    int array1[arraySize] = {1,2,6,7,9};
    int array2[arraySize] = {1,2,6,7,9};

    for(int i=0; i<arraySize; i++){
        if(array1[i] == array2[i]){
            printf("the 2 arrays are same.");
        }
        else
        {
            printf("the 2 arrays are not same.");
        }
        
    }
}

void fibbonacciSeries(){
    int i;
    int ele1 = 0, ele2 = 1;
    int nextTerm = ele1 + ele2;
    printf("Fibonacci Series: %d, %d, ", ele1, ele2);

    while(nextTerm<=10){    
            // for (i = 3; i <= 10; ++i) {
            printf("%d, ", nextTerm);
            ele1 = ele2;
            ele2 = nextTerm;
            nextTerm = ele1 + ele2;
            // }
    }
}


void main(){
    // addingTwoArrays();
    // multiplyingTwoArrays();
    // modulusFunction(); some error ask!
    // checkForIdenticalArrays(); 
    fibbonacciSeries();
}