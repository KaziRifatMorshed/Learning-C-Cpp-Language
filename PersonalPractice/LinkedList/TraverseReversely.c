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

void Traverse(node *n) {
    if (n->next == NULL) { // base case
        printf("%d\n", n->number);
        return;
    }
    Traverse(n->next); // using the concept of recursion
    printf("%d\n", n->number);
    //return;
}

int main(void) {
    node *head, *tail, *curuent;
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        node *n = (node *) malloc(sizeof(node));
        n->next = NULL;
        scanf("%d", &n->number);
        if (i == 0) {
            head = n;
            curuent = n;
        } else {
            curuent->next = n;
            curuent = n;
        }
        if (i == (n - 1)) {
            tail = n;
        }

    }

    PrintLinkedList(head);
    Traverse(head);
    // end
} // done

/**
 * 5 // test case
1
2
3
4
5
1.[1]
2.[2]
3.[3]
4.[4]
5.[5]
5
4
3
2
1

 */