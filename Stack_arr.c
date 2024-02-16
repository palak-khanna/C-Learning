#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int arr[], int val)
{
    if(top == MAX-1)
    {
        printf("#STACK OVERFLOW.\n");
    }
    else
    {
        top+=1;
        arr[top] = val;
        printf("the value inserted : %d\n",val);
    }
}

void pop(int arr[])
{
    if(top == -1)
    {
        printf("#STACK UNDERFLOW. \n");
    }
    else{
        int pop_ele = arr[top];
        printf("the popped element is : %d\n",pop_ele);
        top = top-1;
    }
}

void display(int arr[])
{
    printf("the elements in stack format: \n");
    // here also we are displaying elements in stack format or LIFO format 
    for(int i=top ; i>=0; i--)
    {
        int ele = arr[i];
        printf("%d\n",ele);
    }
}

void peek(int arr[])
{
    if(top == -1)
    {
        printf("#STACK UNDERFLOW \n");
    }
    else{
        int peek_ele = arr[top];
        printf("%d\n",peek_ele);
    }
}

int main()
{
    int num;
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    printf("\n");
    
    // PUSH IMPLIMENTATION
    for(int i=0; i<num; i++)
    {
        push(stack_arr,i*3);
        display(stack_arr);
    }
    // POP IMPLIMENTATION
    pop(stack_arr);
    display(stack_arr);
    
    // PEEK IMPLIMENTATION
    printf("peeked :\n");
    peek(stack_arr);
    display(stack_arr);
}
