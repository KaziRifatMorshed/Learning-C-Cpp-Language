#include <stdio.h>
#include <stdlib.h>

struct node_of_a_linked_list{
    // int node_id;
    int node_content;
    struct node_of_a_linked_list *next_node;
};

void PrintNodes(struct node_of_a_linked_list *p){
    while (p != NULL){
        printf("< %d >", p->node_content);
        p = p->next_node;
    }
};

int main(void){
    struct node_of_a_linked_list *n1, *n2, *n3, *n4, *n, *start, *current; // here, start is the head node
    // why pointer type ????


    // Allocate memory dynamically (in Heap) and store the initial address in n1, n2, n3 (struct type) pointer
    n1 = (struct node_of_a_linked_list *) malloc(sizeof(struct node_of_a_linked_list));
    n2 = (struct node_of_a_linked_list *) malloc(sizeof(struct node_of_a_linked_list));
    n3 = (struct node_of_a_linked_list *) malloc(sizeof(struct node_of_a_linked_list));

    // What about allocating memory in Stack !?!?!?!?!?
    struct node_of_a_linked_list m1, m2, m3, *m;

    // Setting some values in those structures
    m1.node_content = 111;
    m2.node_content = 222;
    m3.node_content = 333;  // and
    n1->node_content = 777;
    n2->node_content = 888;
    n3->node_content = 999;

    // Linking them ... [ n1 -> n2 -> n3 ;; m1 -> m2 -> m3 ]
    m1.next_node = &m2;
    m2.next_node = &m3;
    m3.next_node = NULL;

    n1->next_node = n2;
    n2->next_node = n3;
    n3->next_node = NULL;



    // test and print for self satisfaction
    printf("size of struct = %d \n\n", sizeof(struct node_of_a_linked_list));
    // printf("m1's content = %d and n1's content = %d && n2's content = %d", m1.node_content, n1->node_content, n2->node_content);
    printf("m1's content = %d and n1's content = %d && n2's content = %d", m1.node_content, n1->node_content, n1->next_node->node_content);

    printf("\n");



    // looping to print all those elements
    n = n1;
    m = &m1;
    while (n != NULL){
        printf("< %d >", n->node_content);
        // CAREFUL, NOT printf("< %d >", n); // NOT n ALONE
        n = n->next_node; // similar to i++
    }
    printf("\n");
    while (m != NULL){
        printf("{ %d }", m->node_content);
        m = m->next_node;
    }


    printf("\n\n");



    // New structure operation
    int counter = 1;
    while (1){
        n = (struct node_of_a_linked_list *) malloc(sizeof(struct node_of_a_linked_list));
        n->node_content = counter;
        n->next_node = NULL;

        if (counter == 1){
            start = n; // this 'start' is the HEAD of a linked list which knows first node
            current = n;
        } else{
            current->next_node = n; // ?
            current = n; // ?
        }
        if (counter == 30) break;

        counter++;
    }

    PrintNodes(start); // start is the HEAD NODE

// EOF
}