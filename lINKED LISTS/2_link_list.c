
#include <stdio.h>
#include <stdlib.h>

typedef struct l1 {
    int data;
    struct l1* next;
} l1;

typedef struct l2 {
    int data2;
    struct l2* next2;
} l2;

void llt(l1* ptr) {
    while (ptr != NULL) {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;  // Correctly traverse the list
    }
}

void llt2(l2* ptr) {
    while (ptr != NULL) {
        printf("element : %d\n", ptr->data2);
        ptr = ptr->next2;  // Correctly traverse the list
    }
}

int main() {
    // Allocate memory for linked list nodes of l1
    l1* head = (l1 *)malloc(sizeof(l1));
    l1* second = (l1 *)malloc(sizeof(l1));
    l1* third = (l1 *)malloc(sizeof(l1));

    // Allocate memory for linked list nodes of l2
    l2* head2 = (l2 *)malloc(sizeof(l2));
    l2* second2 = (l2 *)malloc(sizeof(l2));
    l2* third2 = (l2 *)malloc(sizeof(l2));

    // Check for memory allocation errors
    if (head == NULL || second == NULL || third == NULL ||
        head2 == NULL || second2 == NULL || third2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the linked list l1
    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = NULL;  // Correctly initialize the end of the list

    // Initialize the linked list l2
    head2->data2 = 5;
    head2->next2 = second2;

    second2->data2 = 4;
    second2->next2 = third2;

    third2->data2 = 2;
    third2->next2 = NULL;  // Correctly initialize the end of the list

    // Print the linked lists
    llt(head);
    llt2(head2);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    free(head2);
    free(second2);
    free(third2);

    return 0;
}

