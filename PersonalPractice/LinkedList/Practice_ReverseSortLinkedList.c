//
// Create a (revers) SORTED Singly Linked List
// 27 March 2024

#include "LinkedListHeader.h"

node *search_return_previous(node *n, int key) {
#define n_have_next (n->next != NULL)
    node *head = n, *result = n;
    while (n != NULL) {
        if (n->number >= key) {
            result = n;
        }
        n = n->next;
    }
    return result; // in case not found
} // WORKS


void print_node(node *n) {
    printf("[");
    while (n != NULL) {
        printf("%d ", n->number);
        n = n->next;
    }
    printf("]\n");
} // WORKS


int main(void) {
    node *head = (node *) malloc(sizeof(node)), *current;
    int nc = 0;
    head->number = INT_MAX; // জোড়া তালি
    printf("How many nodes do you want to have: ");
    scanf("%d", &nc);
    for (int i = 0; i < nc; ++i) {
        int temp = INT_MAX;
        node *n = (node *) malloc(sizeof(node));
        scanf("%d", &temp);
        n->next == NULL;
        n->number = temp;

        node *search_result = search_return_previous(head, temp);
        n->next = search_result->next;
        search_result->next = n;
        print_node(head->next);

    }
    print_node(head->next);

    // end
} // DONE