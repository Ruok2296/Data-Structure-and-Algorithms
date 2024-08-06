#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

// function to display linked list
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    node *head;
    node *second;
    node *third;
    node *last;

    // allocate memory for nodes
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    // assign data to nodes

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = last;

    last->data = 4;
    last->next = NULL;

    // delete first node ********************************

    //  struct node *ptr = head;
    // head = head->next;
    // free(ptr);
    //    printf("first node is %d\n",head->data);

    // delete in between *********************************
      //struct node *ptr = head;

    //while (ptr != NULL && ptr->next != NULL && ptr->next != last)
   // {
        ///struct node *q = ptr->next;
        //if (q->next == last)
        //{                     // Check if q is the second-to-last node
            //ptr->next = last; // Skip the second-to-last node
            //free(q);
            //break; // Free the memory of the second-to-last node
       // }
        //ptr = ptr->next;
    //}

//   deleting the last node ***********************************
/*
        struct node*ptr = head ;
        while(ptr->next !=NULL){
            struct node*q =ptr->next;
            if(q->next == NULL){
                ptr->next = NULL;
                free(q);
                break; // Free the memory of the last node
            }
            ptr = ptr->next;
        }*/
// Deleting the value with a value 
    int n = 2;

    struct node* ptr = head;

    while(ptr->next != NULL){
         struct node* q = ptr->next;
        if(q->data == n){
            ptr->next = q->next;
            free(q);
            break; // Free the memory of the node with value n
        }
ptr = ptr->next;
    }


    display(head);

    ptr = head;
    while (ptr != NULL)
    {
        struct node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
} 