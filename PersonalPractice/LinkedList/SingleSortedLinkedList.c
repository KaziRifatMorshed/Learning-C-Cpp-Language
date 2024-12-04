#include "LinkedListHeader.h"
#define true 1
#define false 0

struct node {
  int nid;
  struct node *n;
};

void PrintNodes(struct node *p) {
  while (p != NULL) {
    printf(" %d ", p->nid);
    p = p->n;
  }
}



struct node *Search_in_list(int inputted, struct node *nodeee) {
  // if found then returns address
  while (nodeee != NULL) {
    if (inputted == nodeee->nid) {
      return nodeee; // found
    }
    nodeee = nodeee->n;
  }
  return NULL; // not found
} //

struct node *AddNode(struct node *prev_last, int new_node_id) {
  struct node *temp = prev_last->n;
  struct node *new = (struct node *)malloc(sizeof(struct node));

  prev_last->n = new;
  new->nid = new_node_id;
  // new->n = NULL;

  return new;
} // still confused

int main(void) {
  int count = 0, i = 0;
  struct node *p, *start, *current;

  printf("How many values do you need to store?");
  scanf("%d", &i);

  while (count < i) {

    int nid = 0;
    printf("\nenter node id(content): ");
    scanf("%d", &nid);

    // p = (struct node *)malloc(sizeof(struct node));
    // p->nid = nid;
    // p->n = NULL;

    if (count == 0) {
      start = p;
      current = start;

    } else {
      // current->n = p;
      // current = p;

      // will search every time after input is done
      struct node *search_function_return = Search_in_list(nid, start);
      if (search_function_return != NULL) { // if found
        current = AddNode(search_function_return, nid);
      } else { // if not found
        current = AddNode(current, nid);
      }
    }
    count++;
  }

  PrintNodes(start);

  // EOF
}