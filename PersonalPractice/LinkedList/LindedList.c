#include <stdio.h>
#include <stdlib.h>

struct node {
  int node_id;
  struct node *next;
  /*
int *next; // int type er ekta address store korbe
  struct node *next; // struct type er ekta address store korbe
*/
};

void print_nodes(struct node *p) {
  while (p != NULL) {
    printf(" %d ", p->node_id);
    p = p->next;
  }
}

int main(void) {
  struct node *n1, *n2, *n3, *n, *start, *current;

  n1 = (struct node *)malloc(sizeof(struct node));
  n2 = (struct node *)malloc(sizeof(struct node));
  n3 = (struct node *)malloc(sizeof(struct node));

  n1->node_id = 10;
  n2->node_id = 20;
  n3->node_id = 30;

  n1->next = n2;
  n2->next = n3;
  n3->next = NULL;

  // printf("size of node = %d\n", sizeof(struct node));
  printf(" n1->node_id = %d \n", n1->node_id);
  printf(" n1->next->node_id = %d \n", n1->next->node_id);
  printf(" n1->next->next->node_id = %d \n", n1->next->next->node_id);

  n = n1;
  while (n != NULL) {
    printf("<%d>", n->node_id);
    n = n->next;
  }

  int counter = 1;
  while (1) {
    n = (struct node *)malloc(sizeof(struct node));
    // counter er value node id
    n->node_id = counter;
    n->next = NULL;

    if (counter == 1) {
      start = n;
      current = n;
    } else {
      current->next = n;
      // ager loop er por ei loop e same name e ekta n toiri hosse
      current = n;
    }

    if (counter == 30) {
      break;
    }

    counter++;
  }

  // EOF
} // dtj243c