#include "LinkedListHeader.h"

node *SearchForTargetNode_recursive(node *NODE, node *tail, int key) {
    if (NODE == tail) { // base case
        return NULL;
    }

    if (NODE->next->number == key) {
        return NODE;
    } else {
        node *temp = SearchForTargetNode_recursive(NODE->next, tail, key);
        free(NODE); // Free the allocated memory for the current node
        return temp;
    }
}

node *SearchForTargetNode(node *NODE, node *tail, int key) {
    node *head = NODE;
    if (head->number == key) {
        return head;
    } else {
        while (NODE != tail && NODE->next->number != key) {
            NODE = NODE->next;
        }

        if (NODE == tail) {
            return NULL;
        } else {
            return NODE;
        }
    }
}

void PrintLinkedList(node *vertex) {
    int counter_for_circular = 0;
    while (vertex != NULL) {
        printf("%d.[%d]\n", counter_for_circular + 1, vertex->number);
        vertex = vertex->next;
        counter_for_circular++;
        if (counter_for_circular == 15) {
            break;
        }
    }
}

int main(void) {
    node *head, *first, *current, *tail;
    printf("input element count: ");
    int element_count = 0;
    scanf("%d", &element_count);

    for (int i = 0; i < element_count; ++i) {
        node *new = (node *)malloc(sizeof(node));
        new->next = NULL;
        printf("enter a number to store inside a node: ");
        scanf("%d", &new->number);
        if (i == 0) {
            head->next = new;
            first = new;
            current = new;
        } else {
            current->next = new;
            current = new;
        }
        // CIRCULAR
        if (i == (element_count - 1)) {
            new->next = first;
            tail = new;
        }
    }

    PrintLinkedList(first);

    printf("আমি এবার এসেছি নোড ডিলেট করতে\nকাকে মুছে দিতে চান জাহাপনা ? (input -1 to cancel)");
    int delete_target_key = INT_MIN;
    scanf("%d", &delete_target_key);
    if (delete_target_key == -1) {
        printf("nothing to be deleted.");
        return 0;
    } else {
        node *target_node = SearchForTargetNode(head, tail, delete_target_key);
        if (target_node == NULL) {
            printf("Target node not found.\n");
        } else {
            // Delete the target node
            if (target_node == head) {
                head = head->next;
                tail->next = head;
            } else if (target_node == tail) {
                tail = target_node->prev;
                tail->next = head;
            } else {
                target_node->prev->next = target_node->next;
                target_node->next->prev = target_node->prev;
            }
            free(target_node);
        }
    }

    PrintLinkedList(head);

    return 0;
}
