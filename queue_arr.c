#include <stdio.h>
#define MAX 5

int queue_arr[MAX];
int rear = -1, front = -1;

void insert(int arr[], int val)
{
    if(rear == MAX-1)
    {
        printf("#QUEUE OVERFLOW.\n");
    }
    else
    {
        front = 0;
        rear+=1;
        arr[rear] = val;
        printf("the value inserted : %d\n",val);
    }
}

void delete_ele(int arr[])
{
    if(front == -1 | front>=rear)
    {
        printf("#QUEUE UNDERFLOW. \n");
    }
    else{
        front = 0;
        int front_ele = arr[front];
        printf("the deleted element is : %d\n",front_ele);
        front +=front;
    }
}

void display(int arr[])
{
    printf("the elements in QUEUE format: \n");
    // here also we are displaying elements in QUEUE format or LIFO format 
    for(int i=front ; i<rear; i++)
    {
        int ele = arr[i];
        printf("%d\n",ele);
    }
}

void peek(int arr[])
{
    if(rear == -1)
    {
        printf("#QUEUE UNDERFLOW \n");
    }
    else{
        int peek_ele = arr[rear];
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
        insert(queue_arr,i*3);
        display(queue_arr);
    }
    // POP IMPLIMENTATION
    delete_ele(queue_arr);
    display(queue_arr);
    
    // PEEK IMPLIMENTATION
    printf("peeked :\n");
    peek(queue_arr);
    display(queue_arr);
}