// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* START=NULL;

struct node* display(struct node* start)
{
    printf("\n---- DISPLAY ELEMENTS ----\n");
    struct node* ptr;
    ptr = start;
    while (ptr!= NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node* delete_beg(struct node *start){
    printf("\n---- DELETION OF BEGINNING ELE----\n");
    struct node *ptr;
    ptr = start;
    ptr = ptr -> next;
    display(ptr);
    return ptr;
}

struct node* delete_end(struct node* start)
{
    printf("\n---- DELETION IN END----\n");
    struct node* ptr, *prevptr;
    ptr= start;
    while(ptr -> next!=NULL){
        prevptr = ptr;
        ptr = ptr->next;
    };
    prevptr->next = NULL;
    display(start);
    return start;
}

int countNodes(struct node* start)
{
    struct node* ptr;
    ptr = start;
    int counter=0;
    while(ptr !=NULL){
        counter++;
        ptr = ptr -> next;
    };
    printf("\nthe number of nodes is %d .\n",counter);
    return counter;
}

struct node* insert_beg(struct node* start)
{
    struct node* new_node, ptr;
    printf("\n---- INSERTION IN BEGINNING ----\n");   
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new node : ");
    scanf("%d",&(new_node->data));
    
    new_node->next = start;
    start = new_node;
    display(start);
    return start;
}

struct node* insert_end(struct node* start)
{
    printf("\n---- INSERTION IN END ----\n");
    struct node* new_node, *ptr;
    ptr = start;
    int num;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new node : ");
    scanf("%d",&(num));
    new_node->next = NULL;
    new_node->data = num;
    
    while(ptr->next !=NULL)
    {
        ptr = ptr->next;
    };
    ptr->next = new_node;
    printf("The start pointer = %x and ptr pointer = %x \n", start, ptr);
    display(start);
    return start;
}

struct node* insert_pos(struct node* start)
{
    printf("\n----INSERTION AT A POSITION ----\n");
    int n;
    printf("Enter the position to insert the ele: ");
    scanf("%d",&n);
    
    if(n>countNodes(start)) {
        insert_end(start);
    }else if(n<0){
        insert_beg(start);
    }else{
        struct node* ptr, *new_node;
        int num;
        
        printf("Enter the data of new node: ");
        scanf("%d",&num);
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node-> data = num;
        ptr = start;
    
        int pos= 0;
        while(ptr != NULL){
            pos++;
            if(pos==n-1){
                new_node -> next = ptr->next;
                ptr->next = new_node;
            }
            ptr = ptr->next;
        };
        display(start);
    }
    return start;
}

struct node* insert_after(struct node* start)
{
    printf("\n---- INSERTION AFTER ----\n");
    int reqdata;
    printf("Enter the data after which node is to be inserted: ");
    scanf("%d",&reqdata);
    
    struct node* new_node, *ptr;
    ptr = start;
    
    new_node = (struct node*)malloc(sizeof(struct node));
    int num;
    printf("\nenter the data of new node: ");
    scanf("%d",&num);
    
    while(ptr != NULL){
        if(ptr->data == reqdata){
            new_node -> data = num;
            new_node->next = ptr->next;
            ptr->next = new_node;
            break;
        }else{
            ptr = ptr->next;
        }
    };
    display(start);
    return start;
}

struct node* insert_before(struct node* start)
{
    printf("\n---- INSERTION AFTER ----\n");
    int reqdata;
    printf("Enter the data before which node is to be inserted: ");
    scanf("%d",&reqdata);
    
    struct node* new_node, *ptr, *prevptr;
    prevptr = ptr;
    ptr = start;
    
    new_node = (struct node*)malloc(sizeof(struct node));
    int num;
    printf("\nenter the data of new node: ");
    scanf("%d",&num);
    
    while(ptr->next != NULL){
        if(ptr->data == reqdata){
            new_node -> data = num;
            new_node->next = ptr;
            prevptr ->next = new_node;
            break;
        }else{
            prevptr=  ptr;
            ptr = ptr->next;
        }
    };
    display(start);
    return start;
}

struct node* delete_pos(struct node* start)
{
    printf("\n----DELETION AT A POSITION ----\n");
    int n;
    printf("Enter the position to insert the ele: ");
    scanf("%d",&n);
    
    if(n>countNodes(start)) {
        delete_end(start);
    }else if(n<0){
        delete_beg(start);
    }else{
        struct node* ptr, *new_node;
        
        ptr = start;
    
        int pos= 0;
        while(ptr != NULL){
            pos++;
            if(pos==n-1){
                ptr -> next = ptr->next->next;
            }
            ptr = ptr->next;
        };
        display(start);
    }
    return start;
}

struct node* delete_after(struct node* start){
    printf("---- DELETION AFTER AN ELEMENT ----");
    struct node* ptr;
    int reqdata;
    printf("\nenter the data after which the node is to deleted: ");
    scanf("%d",&reqdata);
    ptr = start;
    
    if (ptr == NULL || ptr->next == NULL) {
        printf("\nDeletion after not possible. List is empty or has only one node.\n");
        return start;
    }
    
    while (ptr->next != NULL) {
        if (ptr->data == reqdata) {
            if (ptr->next != NULL) {
                struct node* temp = ptr->next;
                ptr->next = ptr->next->next;
                free(temp); // Free the memory of the deleted node
                break;
            } else {
                printf("\nNo node found after the specified data to delete.\n");
                break;
            }
        } else {
            ptr = ptr->next;
        }
    };

    display(start);
    return start;
}

struct node* delete_before(struct node* start){
    printf("\n---- DELETION BEFORE AN ELEMENT ----");
    struct node* ptr, *prevptr, *temp;
    int reqdata;
    printf("\nenter the data before which the node is to be deleted: ");
    scanf("%d", &reqdata);
    ptr = start;
    prevptr = NULL;

    // If the list is empty or has only one node, no operation can be performed
    if (ptr == NULL || ptr->next == NULL) {
        printf("\nDeletion before not possible. List is empty or has only one node.\n");
        return start;
    }

    // If the node to be deleted is the first node, no node exists before it
    if (ptr->data == reqdata) {
        printf("\nNo node before the first node to delete.\n");
        return start;
    }

    // Traverse the list to find the node before the node with the given data
    while (ptr->next != NULL) {
        if (ptr->next->data == reqdata) {
            temp = ptr->next; // Node to be deleted
            if (prevptr == NULL) {
                start = start->next; // If the node to be deleted is the second node
            } else {
                prevptr->next = ptr->next; // Update previous node's next pointer
            }
            free(temp); // Free the memory of the node to be deleted
            break;
        } else {
            prevptr = ptr;
            ptr = ptr->next;
        }
    }

    if (ptr->next == NULL) {
        printf("\nNode with data %d not found.\n", reqdata);
    } else {
        display(start); // Display the updated list
    }
    return start;
}


int main() {
    // Creating a linked list 
    struct node *new_node, *ptr, *head;
    
    int number;
    printf("Enter the number of nodes:");
    scanf("%d",&number);
    
    for(int i=0; i<number; i++){
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("enter the data if %d node : ",i+1);
        scanf("%d",&(new_node->data));
        
        new_node->next = NULL;
        
        if(START == NULL){
            START = new_node;
            head = START;
        }else{
            ptr->next = new_node;
        }
        
        ptr = new_node;
        printf("the address of this element: %p\n",ptr);
    };
    
    printf("---- LINKED LIST CREATED ----\n");
    display(START);
    
    int option;
    printf("\n----MAIN MENU----\n");
    printf("Enter the option to perform an opertaion: \n");
    
    printf("1 : Insertion in Begining \n");
    printf("2 : Insertion in End \n");
    printf("3 : Deletion in Begining \n");
    printf("4 : Deletion in End \n");
    printf("5 : Count the number of nodes \n");
    printf("6 : Insertion at a position \n");
    printf("7 : Deletion at a position \n");
    printf("8 : Insertion after an element \n");
    printf("9 : Insertion before an element \n");
    printf("10 : Deletion after an element \n");
    printf("11 : Deletion before an element \n");
    printf("12 : Displaying the linked list \n");
    
    printf("\nEnter the option: ");
    scanf("%d",&option);
    
    switch (option){
        case 1:{
            insert_beg(START);
            break;}
        
        case 2:{
            insert_end(START);
            break;}
        
        case 3:{
            delete_beg(START);
            break;
        }
        
        case 4:{
            delete_end(START);
            break;
        }
        
        case 5:{
            countNodes(START);            
            break;
        }
        
        case 6:{
            insert_pos(START);
            break;
        }
        
        case 7:{
            delete_pos(START);
            break;
        }
        
        case 8:{
            insert_after(START);
            break;
        }
        
        case 9:{
            insert_before(START);
            break;
        }
        
        case 10:{
            delete_after(START);
            break;
        }
        
        case 11:{
            delete_before(START);
            break;
        }
        
        case 12:{
            display(START);
            break;
        }
        
        default:{
            printf("No case matched!!");
            break;
        }
    }
    
    
}
