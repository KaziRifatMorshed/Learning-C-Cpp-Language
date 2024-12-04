//
// Created by noobcodermsi on 2/17/24.
//
/*HEADER:
#ifndef LEARNINGCLANG_LINKEDLISTHEADER_H
#define LEARNINGCLANG_LINKEDLISTHEADER_H

#endif //LEARNINGCLANG_LINKEDLISTHEADER_H

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

struct linked_list{
    int number;
    struct linked_list *next;
    struct linked_list *prev;
};
typedef struct linked_list node;
*/
#include "LinkedListHeader.h"

node *find_using_recursion(node *node, int key) {
    if (node->next->number == key) {
        return node;
    } else if (node->next == NULL) {
        return NULL;
    } else {
        return find_using_recursion(node->next, key);
    }
}

node *find_using_loop(node *_node, int key, node *tail_node) {
    while (_node != NULL) {
        if (_node->next->number < key){
            _node = _node->next;
        } else if (_node->next->number == key) {
            return _node;
        }
        // _node = _node->next;
    }
    return NULL; // if not found
}

node *find_using_loop_V2(node *_node, int key, node* tail_node){
    while(1){
        if (_node->next->number < key) {
            _node->next = _node->next->next; // shifting to the next node
            //} else if(_node->next == NULL){ // tail case
            //    return NULL;
        } else {
            break;
        }
    }
    return _node;
}

// current node er pore insert korbo
node *insert(node *passed_node, int content) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->next = passed_node->next;
    passed_node->next = new_node;
    new_node->number = content;
    return new_node; // new node will be current
}

void PrintNodes(node *_node) { // PrintNodes(head->next)
    while (_node->next != NULL) {
        printf(" [%d] ", _node->number);
        _node = _node->next;
    }
} // I guess, will work

int main(void) {
    node *head, *vertex, *current, *tail;
    head = (node *) malloc(sizeof(node)); // first
    tail = (node *) malloc(sizeof(node)); // last
    head->number = -2147483648;
    strcpy(head->node_name, "head"); // head->node_name = "head";
    tail->number = -2147483648;
    strcpy(tail->node_name, "tail");
    current = head;
    head->next = tail;  // head -> tail
    tail->next = NULL;
    printf("input 6 int (randomly, not in sequence):\n");
    int element = 0;

    for (int i = 0; i < 6; ++i) {

        scanf("%d", &element);
        node *search_result = find_using_loop(head, element, tail);
        if (search_result == NULL) { // inputted element doesn't exist
            current = insert(current, element);
        } else {
            current = insert(search_result, element); // new node will be current
        }

        PrintNodes(head);
    }
    // eof
} // ABANDONED
