#include<stdio.h>
#include<stdlib.h>
struct l1{
    int data;
    struct l1*next;
};
void llt(struct l1* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(){

struct l1*first;    
struct l1*second;
struct l1*third ;
struct l1*insertiion;
    
    first = (struct l1 *)malloc(sizeof(struct l1));
    second = (struct l1 *)malloc(sizeof(struct l1));
    third = (struct l1 *)malloc(sizeof(struct l1));
    insertiion = (struct l1 *)malloc(sizeof(struct l1));


    first->data = 1;
    first->next = second; // link the first node to the second node.
        
    //insertiion->data = 4;
    //insertiion->next = second; // link the second node to the first nodeecond; // link the second node to the first nodeecond; // link the second node to the first node

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

        if(first->next == second){
            first->next = insertiion;
            insertiion->data = 5;
            insertiion->next = second; 
        }



    llt(first); // call the function to display the linked list
    free(first);
    free(insertiion);  // free the memory allocated for the inserted node
    free(second);
    free(third);
    //free(head2);
    //free(second2);
   // free(third2);



    return 0;
}