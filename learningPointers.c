#include  <stdio.h>
/*
============What is pointer in c ?====================
Pointers are one of the core components of the C programming language. 
A pointer can be used to store the memory address of other variables, functions, 
or even other pointers. The use of pointers allows low-level memory access, 
dynamic memory allocation, and many other functionality in C.
*/

void main1()
{
    int j = 200;
    int i = 100;
    int* pointer2i = &i;
    printf("the value of i = %d\n",i);
    printf("the address of i in memory = %x \n",&i);
    printf("the new address is : %x \n",pointer2i);
    *pointer2i = 110;
    printf("the value of i = %d\n",i);
}

void main(){
    int n = 20;
    int m = 30;
    int* point1 = &n;
    int* point2 = &m;
    // int sum = point1+point2;
    printf("pointer: %x and %x\n",point1,point2);
    int sum = *point1 + *point2;
    printf("sum of the values is: %d",sum);
}

/*8. Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc*/