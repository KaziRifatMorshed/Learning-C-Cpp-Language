/*HEADER:
#ifndef LEARNINGCLANG_LINKEDLISTHEADER_H
#define LEARNINGCLANG_LINKEDLISTHEADER_H

#endif //LEARNINGCLANG_LINKEDLISTHEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define true 1
#define false 0

struct linked_list{
    int number;
    struct linked_list *next;
    struct linked_list *prev;
    char node_name[6];
};
typedef struct linked_list node;

*/
#include "LinkedListHeader.h"

node *find_using_loop(node *_node, node *tail, int key) {
    node *result = NULL;
    while (_node != tail) {
        if (_node->next->number > (_node->number + 1)) {
            return _node;
        }
        _node = _node->next;
    }
    return result; // if not found
}

// current node er pore insert korbo
void insert(node *je_notun_dhukbe_tar_ager_node, int content) {
    if (je_notun_dhukbe_tar_ager_node == NULL) { return; }

    node *new_node = (node *) malloc(sizeof(node));
    new_node->next = je_notun_dhukbe_tar_ager_node->next;
    je_notun_dhukbe_tar_ager_node->next = new_node;
    new_node->number = content;
}
c
void PrintNodes(node *_node) { // PrintNodes(head->next)
    while (_node->next != NULL) {
        printf(" [%d] ", _node->number);
        _node = _node->next;
    }
} // I guess, will work

int main(void) {
    node *head, *current, *tail;
    head = (node *) malloc(sizeof(node)); // first
    tail = (node *) malloc(sizeof(node)); // last
    current = head;
    head->next = tail; // head -> tail
    tail->next = NULL;
    head->number = INT_MIN;
    tail->number = INT_MAX;
    strcpy(head->node_name, "head"); // head->node_name = "head";
    strcpy(tail->node_name, "tail"); // tail->node_name = "tail";
    // int test_case[6] = {2, 4, 6, 8, 5, 4};

    printf("input six int (randomly, not in sequence):\n");

    for (int i = 0; i < 6; ++i) {
        // taking input
        int element = 0;
        scanf("%d", &element);

        // searching and returning search result
        node *search_result = find_using_loop(head, tail, element); // linear search to the last

        // checking search result and taking action
        insert(search_result, element); // new node will be current

        PrintNodes(head->next);
        printf("\n");
    }

    PrintNodes(head->next);

    // eof
}