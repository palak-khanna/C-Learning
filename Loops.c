#include <stdio.h>

void UsingForLoop(const int a)
{
    printf("this is using for loop:\n");
    for(int i = 5; i<a; i++)
    {
        printf("%d\n",i);
    }
}

void UsingWhileLoop(const int a)
{
    printf("this is using while loop:\n");
    int i = 5;
    while (i<a)
    {
        printf("%d\n",i);
        i=i+1;
    }   
}

void UsingDoWhileLoop(const int a)
{
    printf("this is using do-while loop:\n");
    int i = 5;
    do
    {
        printf("%d\n",i);
        i = i+1;
    } while (i<a);
}

void main()
{
    const int x = 5;
    // UsingDoWhileLoop(x);
    // UsingForLoop(x);
    UsingWhileLoop(x);
}