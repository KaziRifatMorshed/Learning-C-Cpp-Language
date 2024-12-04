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
    int n = 0;
    scanf("%d", &n);
    node *head, *tail;
    // getting input
    for (int i = 0; i < n; ++i) {
        node *n = (node *) malloc(sizeof(node));
        n->next = NULL;
        scanf("%d", &n->number);
        if (i == 0) {
            head = n;
        }
    }

    PrintLinkedList(head);
    // end
}