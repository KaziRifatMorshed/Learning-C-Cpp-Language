#include "LinkedListHeader.h"

void PrintLinkedList(node *vertex) {
    int counter = 0;
    while (vertex != NULL) {
        // NOT //while (vertex->next != NULL) { // NOT //
        printf("%d.[%d]\n", counter + 1, vertex->number);
        vertex = vertex->next; // for last node, this expression will copy NEXT's
        counter++;
    }
} // works


int main(void) {
    node *head1, *tail1, *current1, *head2, *tail2, *current2;
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        node *n = (node *) malloc(sizeof(node));
        n->next = NULL;
        scanf("%d", &n->number);
        if (i == 0) {
            head1 = n;
            current1 = n;
        } else {
            current1->next = n;
            current1 = n;
        }
        if (i == (n - 1)) {
            tail1 = n;
        }

    }
    current1 = head1;
    PrintLinkedList(head1);

    // same 'n' sized linked list
    for (int i = 0; i < n; ++i) {
        node *n = (node *) malloc(sizeof(node));
        n->next = NULL;
        scanf("%d", &n->number);
        if (i == 0) {
            head2 = n;
            current2 = n;
        } else {
            current2->next = n;
            current2 = n;
        }
        if (i == (n - 1)) {
            tail2 = n;
        }

    }
    current2 = head2;
    PrintLinkedList(head2);

    // final linked list
    node *_head, *_tail, *_current;
    while (current1->next != NULL && current2->next != NULL) {
        node *n = (node *) malloc(sizeof(node));
        n->next = NULL;


    }

    // end
} //