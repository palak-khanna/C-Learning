#include <stdio.h>
#include <stdlib.h>

int main(void){
    // int list[3];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    int* list = malloc(3*sizeof(int));

    if (list==NULL){
        return 1;
    }

    list[0]=1; // also done by *list
    list[1]=2; // *(list+1)
    list[2]=3; // *(list+2)
        

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n",list[i]);
    }

    // how to get more mem 

    int *tmp = malloc(4*sizeof(int)); 
    /*we are not doint this like
     list = malloc(4*sizeof(int));
     because now no one will be pointing to the old chunk 
     hence, we loose data */
    if (tmp==NULL){
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    free(list);

    list = tmp; // now that we dont need it to point to prev value
    // now it should point to new value

    
}