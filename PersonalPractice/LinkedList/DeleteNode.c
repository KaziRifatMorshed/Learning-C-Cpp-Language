// PRACTICE
// TARGET: deleting a node in a circular linked list, and it will print nodes 15
// times
#include "LinkedListHeader.h"

node *SearchForTargetNode_recursive(node *NODE, node *head, node *tail,
                                    int key) {
  // printf("searching fn started\n");
  if (NODE == tail) { // base case
    // printf("node and tail matched, returning null\n");
    return NULL;
  }
  if (NODE == head) { // initial edge case
    if (head->number == key) {
      // printf("head->number == key\n");
      return head;
    }
  }
  //} else if (NODE->next->number == key) { // this statement failed to work
  if (NODE->next->number == key) {
    // printf("NODE->next->number == key|||returning node\n");
    return NODE;
  } else {
    return SearchForTargetNode_recursive(NODE->next, head, tail, key);
  } // return keyword was missing
}

node *delete_node(node *NODE, node *first, node *tail, int key) {
  //    printf("delete node function started\n");
  node *search_result = SearchForTargetNode_recursive(NODE, first, tail, key);
  if (search_result == NULL) {
    printf("\n\"%d\" does not exist\n", key);
  } else {
    printf("search result is %p, next of this node is to be deleted\n",
           search_result);
    // search_result == previous
    node *target = search_result->next;
    search_result->next = target->next;
    free(target);
  }
  // printf("delete node fn ended\n");
  return NULL;
}

void PrintLinkedList(node *vertex) {
  int counter_for_circular = 0;
  while (vertex != NULL) {
    // NOT //while (vertex->next != NULL) { // NOT //
    printf("%d.[%d]\n", counter_for_circular + 1, vertex->number);
    vertex = vertex->next; // for last node, this expression will copy NEXT's
    // NULL value to present
    counter_for_circular++;
    if (counter_for_circular == 15) {
      break;
    }
  }
} // works

int main(void) {
  node *first, *current, *tail;
  printf("input element count: ");
  int element_count = 0;
  scanf("%d", &element_count);

  for (int i = 0; i < element_count; ++i) {
    node *new = (node *)malloc(sizeof(node));
    new->next = NULL;
    new->number = 0;
    printf("enter a number to store inside a node: ");
    int temp = 0;
    scanf("%d", &temp);
    new->number = temp;
    printf("%d is inputted\n", new->number);
    if (i == 0) {
      first = new;
      current = new;
    } else {
      current->next = new;
      current = new;
    }
    // CIRCULAR
    if (i == (element_count -
              1)) { // হেড কে মনে রাখব // লাস্টের জনের পিছে হেড জুড়ে দিব
      new->next = first;
      tail = new;
    }
  }
  PrintLinkedList(first);

  printf("আমি এবার এসেছি নোড ডিলেট করতে\nকাকে মুছে দিতে চান জাহাপনা ? (input -1 "
         "to cancel)");
  int delete_target_key = INT_MIN;
  int temp = 0;
  scanf("%d", &temp);
  delete_target_key = temp;
  printf("\n%d is inputted for deletion\n", delete_target_key);

  delete_node(first, first, tail, delete_target_key);

  PrintLinkedList(first);
  // eof
} // DONE // WORKS