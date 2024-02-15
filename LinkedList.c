// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
/* FUNCTIONS 
- INSERTION IN BEGINNING done
- INSERTION IN END done 
- INSERTION IN BETWEEN done 
- DELETION IN BEGINNING
- DELETION IN END
- DELETION IN BETWEEN
*/
struct node{
    int data;
    struct node *next;
};

struct node *START=NULL;

struct node* display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
         printf("%d ", ptr -> data);
         ptr = ptr -> next;
    }
    return start;
}

void insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\n Enter the data to insert at beginning: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    display(start);
}

void insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data to insert at end: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    while(ptr -> next != NULL)
        {ptr = ptr -> next;};
    ptr -> next = new_node;
}

int countlist(struct node *start){
    struct node *ptr;
    ptr = start;
    int counter = 0;
    // printf("The value in node.next = %p \n",ptr->next)
    // display(start);
    while(ptr != NULL){
        ptr = ptr->next;
        counter = counter+1;
    }
    return counter;
}

struct node *insert_position(struct node *start) {
    int position, num, counter = 0; // Initialize counter
    struct node *ptr, *new_node, *ptr1;
    printf("\nEnter the position to insert in : ");
    scanf("%d", &position); // Remove \n from scanf format string

    printf("count of number of ele present rn = %d\n", countlist(start));

    if (position <= 0) {
        insert_beg(start); 
    } else if (position >= countlist(start) + 1) {
        insert_end(start); 
    } else {
        new_node = (struct node*)malloc(sizeof(struct node));
        if (new_node == NULL) {
            printf("Memory allocation failed!\n");
            return start; 
        }
        printf("Enter the data to insert : ");
        scanf("%d", &num);
        new_node->data = num;

        ptr = start;
        while (ptr != NULL) {
            counter = counter + 1;
            if (counter == position - 1) {
                new_node->next = ptr->next;
                ptr->next = new_node;
                break; // Exit loop after insertion
            }
            ptr = ptr->next;
        }
        display(start);
    }

    
    return start; // Return the modified list
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    int counter=0;
    ptr = start;
    
    while(ptr!=NULL){
        counter = counter +1;

        
        if(counter == 1){
            start = ptr -> next;
            ptr = start;
        }
        ptr = ptr -> next;
    }
    printf("\ndeleted beginning element :");
    display(start);
    printf("\n");
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *prevptr;
    ptr = start;
    prevptr = ptr;
    
    while(ptr->next!=NULL){
        prevptr = ptr;
        ptr = ptr->next;
    }
    prevptr->next=NULL;
    free(ptr);
    printf("\ndeleted ending element: ");
    display(start);
    printf("\n");
    return start;
}

struct node* delete_pos(struct node *start)
{
    int counter = 0, position;
    struct node *ptr, *prevptr;
    printf("enter position to delete : ");
    scanf("%d",&position);
    ptr = start;
    prevptr = ptr;

    if(position>=countlist(start))
    {
        delete_end(start);
    }else if(position<=0)
    {
        delete_beg(start);
    }else{
        while(ptr->next!=NULL)
        {
            counter +=1;
            if (counter == position){
                prevptr ->next = ptr->next;
            } 
            prevptr = ptr;
            ptr = ptr->next;
        };
    }
    printf("deleted at a certain position \n");
    display(start);
    return start;
}


int main() {
    // CREATING LIST
    int number;
    printf("Enter the number of nodes :");
    scanf("%d",&number);
    
    struct node *new_node, *ptr, *head;
    
    for(int i=0; i<number; i++){
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&(new_node->data));
        
        new_node -> next = NULL;
        
        if (START == NULL) {
            START = new_node;
            head = START;
        } else {
            ptr->next = new_node;
        }
        ptr = new_node;
        // head = START;
                        
        printf("pointer alloted %p \n",ptr);};
    printf("LINKED LIST CREATED \n");
    display(START);
    // insert_end(START);
    // insert_beg(START);
    // int iCount = countlist(head);
    // printf("The count = %d ", iCount);
    // insert_position(START);
    // delete_beg(START);
    // delete_end(START);
    delete_pos(START);
}