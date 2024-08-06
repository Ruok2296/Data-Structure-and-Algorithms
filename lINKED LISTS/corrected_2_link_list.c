#include <stdio.h>
#include <stdlib.h>

struct l1 {
    int data;
    struct l1* next;
};

struct l2 {
    int data2;
    struct l2* next2; 
};

void llt(struct l1* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void llt2(struct l2* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data2);
        ptr = ptr->next2;
    }
}

int main() {
    struct l1* head;
    struct l1* second;
    struct l1* third;

    struct l2* head2;
    struct l2* second2;
    struct l2* third2;

    head = (struct l1*)malloc(sizeof(struct l1));
    second = (struct l1*)malloc(sizeof(struct l1));
    third = (struct l1*)malloc(sizeof(struct l1));

    head2 = (struct l2*)malloc(sizeof(struct l2));
    second2 = (struct l2*)malloc(sizeof(struct l2));
    third2 = (struct l2*)malloc(sizeof(struct l2));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    head2->data2 = 5;
    head2->next2 = second2;

    second2->data2 = 4;
    second2->next2 = third2;

    third2->data2 = 2;
    third2->next2 = NULL;

    llt(head);
    llt2(head2);

    // Freeing allocated memory
    free(head);
    free(second);
    free(third);
    free(head2);
    free(second2);
    free(third2);

    return 0;
}

