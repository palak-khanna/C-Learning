// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node* right;
};

struct node* START=NULL;

struct node* insert_element(struct node* start, int val){
    struct node* new_node, *nodeptr, *parentptr;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->left = new_node->right = NULL;
    
    if(start==NULL){
        start = new_node;
    }
    else{
        parentptr = NULL;
        nodeptr = start;
        while(nodeptr!=NULL){
            parentptr = nodeptr;
            if(val>nodeptr->data){
                nodeptr = nodeptr->right;
            }else{
                nodeptr = nodeptr->left;
            }
        }
        
        if(val<parentpr->data){
            parentptr = parentptr->left;
        }else{
            parentptr = parentptr -> right;
        }
    }
    return start;
}

//TRAVERSAL METHODS
void inorder_traversal(struct node* start){
    if(start==NULL) return;
    inorder_traversal(start->left);
    printf("%d ",start->data);
    inorder_traversal(start->right);
}

void preorder_traversal(struct node* start){
    if(start==NULL) return;
    printf("%d ",start->data);
    preorder_traversal(start->left);
    preorder_traversal(start->right);
}

void postorder_traversal(struct node* start){
    if(start==NULL) return;
    postorder_traversal(start->left);
    postorder_traversal(start->right);
    printf("%d ",start->data);
}

struct node* minValueNode(struct node* start){
    struct node* ptr = start;
    while(ptr && ptr->left!=NULL){
        ptr = ptr->left;
    }
    return ptr;
}

struct node* delete_element(struct node*root, int val){
    if(root==NULL) return root;
    
    if(val<root->data){
        root->left = delete_element(root->left, val);
    }
    else if(val>root->data){
        root->right = delete_element(root->right, val);
    }
    else{
        struct node* temp;
        // only 1 or no child
        if(root->right==NULL){
            temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            temp = root->right;
            free(root);
            return temp;
        }
        
        temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete_element(root->right, tenp->data);
        
    }
    return root;
}

struct node *deleteTree(struct node *tree)
{
    if(tree!=NULL)
    {
        deleteTree(tree–>left);
        deleteTree(tree–>right);
        free(tree);
    }
}

struct node* maxValueNode(struct node* start){
    struct node* current = start;
    while(current && current->right!=NULL){
        current = current->right;
    }
    return current;
}

int totalNodes(struct node* root){
    if(root==NULL) return 0;
    else return(totalNodes(root->left)+total(nodes->right)+1)
}

int totalExternalNodes(struct node *tree)
{
    if(tree==NULL) return 0;
    else if((tree–>left==NULL) && (tree–>right==NULL))
    return 1;
    else 
    return (totalExternalNodes(tree–>left) +
    totalExternalNodes(tree–>right));
}

int totalInternalNodes(struct node *tree)
{
    if( (tree==NULL) || ((tree–>left==NULL) && (tree–>right==NULL))) return 0;
    else
    return (totalInternalNodes(tree–>left)
    + totalInternalNodes(tree–>right) + 1);
}

int Height(struct node *tree)
{
    int leftheight, rightheight;
    Efficient Binary Trees 311
    if(tree==NULL)
        return 0;
    else
    {
        leftheight = Height(tree–>left);
        rightheight = Height(tree–>right);
        if(leftheight > rightheight)
            return (leftheight + 1);
        else
            return (rightheight + 1);
    }
}

int main() {
    printf("\n ******MAIN MENU******* \n");
    printf("\n 1. Insert Element");
    printf("\n 2. Preorder Traversal");
    printf("\n 3. Inorder Traversal");
    printf("\n 4. Postorder Traversal");
    printf("\n 5. Find the smallest element");
    printf("\n 6. Find the largest element");
    printf("\n 7. Delete an element");
    printf("\n 8. Count the total number of nodes");
    printf("\n 9. Count the total number of external nodes");
    printf("\n 10. Count the total number of internal nodes");
    printf("\n 11. Determine the height of the tree");
    printf("\n 13. Find the mirror image of the tree");
    printf("\n 12. Delete the tree");
    printf("\n 14. Exit");
    printf("\n\n Enter your option : ");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &val);
            tree = insert_element(tree, val);
            break;
        case 2:
            printf("\n The elements of the tree are : \n");
            preorder_traversal(tree);
            break;
        case 3:
            printf("\n The elements of the tree are : \n");
            inorder_traversal(tree);
            break;
        case 4:
            printf("\n The elements of the tree are : \n");
            postorder_traversal(tree);
            break;
        case 5:
            ptr = minValueNode(tree);
            printf("\n Smallest element is :%d",ptr–>data);
            break;
        case 6:
            ptr = maxValueNode(tree);
            printf("\n Largest element is : %d", ptr–>data);
            break;
        case 7:
            printf("\n Enter the element to be deleted : ");
            scanf("%d", &val);
            tree = delete_element(tree, val);
            break;
        case 8:
            printf("\n Total no. of nodes = %d", totalNodes(tree));
            break;
        case 9:
            printf("\n Total no. of external nodes = %d", 
            totalExternalNodes(tree));
            break;
        case 10:
            printf("\n Total no. of internal nodes = %d", 
            totalInternalNodes(tree));
            break;
        case 11:
            printf("\n The height of the tree = %d",Height(tree));
            break;
        case 12:
            tree = deleteTree(tree);
            break;
    }
}
