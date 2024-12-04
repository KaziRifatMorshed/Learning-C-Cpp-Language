//
// Create and Print Singly Linked List
// 27 March 2024

#include "LinkedListHeader.h"

node *search_return_previous(node *n, int key) {
  node *prev = n;
  while (n != NULL) {
    if (n->number == key) {
      return prev;
    }
    prev = n;
    n = n->next;
  }
  return NULL; // in case not found
} // WORKS

/*    while (n->next != NULL) {
        if (n->next->number == key) {*/

node *search_RS(node *n, int key) {
  while (n != NULL) {
    if (n->number == key) { // found
      return n;
    }
    n = n->next; // searching, iterating
  }
  return NULL; // in case: totally not found
} // WORKS

void insert_last(node *n, int data) {
  // go to last
  while (n->next != NULL) { // n->next != NULL
    n = n->next;
  }
  n->next = (node *)malloc(sizeof(node));
  n->next->number = data; // NOTICE
  n->next->next = NULL;
} // WORKS

void insert_somewhere(node *n, int prev_node_data, int data) {
  node *prev = search_RS(n, prev_node_data);
  node *new = (node *)malloc(sizeof(node));
  new->number = data;
  new->next = prev->next;
  prev->next = new;
}

void print_node(node *n) {
  while (n != NULL) {
    printf("%d ", n->number);
    n = n->next;
  }
} // WORKS

int main(void) {
  node *head, *current;
  int nc = 0;
  printf("How many nodes do you want to have: ");
  scanf("%d", &nc);
  for (int i = 0; i < nc; ++i) {
    int temp = INT_MAX;
    node *n = (node *)malloc(sizeof(node));
    scanf("%d", &temp);
    n->next = NULL;
    n->number = temp;
    if (i == 0) { // head case
      head = current = n;
    } else {
      current->next = n;
      current = n;
    }
  }
  print_node(head);

  // =====================================================

  printf("\n\nnow, Searching time...");
  printf("\ninter key to search: ");
  int key = INT_MIN;
  scanf("%d", &key);
  // node *search_result = search_RS(head, key);
  node *search_result = search_return_previous(head, key);
  if (search_result != NULL) {
    printf("key(%d) found at %p.", search_result->number, search_result);
  } else {
    printf("Not Found");
  }

  // ===================================================

  printf("\n\nnow, Node Deletion...");
  printf("\ninter key to Delete: ");
  scanf("%d", &key);
  search_result = search_return_previous(head, key);
  if (search_result == head) {
    printf("key(%d) found at HEAD %p and is deleted.\nPrinting all: ", key,
           search_result);
    node *delete_target = head; // as search_result stores previous one
    head = head->next;
    free(delete_target);
    print_node(head);
  } else if (search_result != NULL) {
    printf("key(%d) found at %p and is deleted.\nPrinting all: ", key,
           search_result);

    node *delete_target =
        search_result->next; // as search_result stores previous one
    // (search_result->next) = (search_result->next)->next;

    delete_target = delete_target->next;
    free(delete_target);
    // WORKS

    print_node(head);
  } else {
    printf("Not Found");
  }

  // ===================================================

  printf("\n\nnow, add a node at last...");
  printf("\ninter data of a node to add: ");
  scanf("%d", &key);
  insert_last(head, key);
  print_node(head);

  // ===================================================

  printf("\n\nnow, add a node after a node...");
  printf("\ninter the previous node and data of the new node(spaced): ");
  int t = INT_MIN;
  scanf("%d %d", &t, &key);
  insert_somewhere(head, t, key);
  print_node(head);

  // end
} // DONE