#include <stdio.h>  // WORKS
#include <stdlib.h> // BASIC SINGLY LINKED LIST
struct node {
  int nid;
  struct node *next;
};

void PrintNodes(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->nid);
    p = p->next;
  }
}

int main(void) {
  int count = 0, i = 0;
  struct node *new_node_in_heap, *head, *current;

  // p1 = (struct node *)malloc(sizeof(struct node));
  // p2 = (struct node *)malloc(sizeof(struct node));
  // p3 = (struct node *)malloc(sizeof(struct node));

  printf("How many values do you need to store? ");
  scanf("%d", &i);

  for (int i = 0; i < count; i++) {

    int new_node_id = 0;
    printf("enter node id: ");
    scanf("%d", &new_node_id);

    new_node_in_heap = (struct node *)malloc(sizeof(struct node));

    new_node_in_heap->nid = new_node_id;
    new_node_in_heap->next = NULL;

    if (count == 0) {
      head = new_node_in_heap;
      current = new_node_in_heap;

    } else {
      // still current e ache ager ta
      current->next = new_node_in_heap;
      // শোনো প্রথম বক্স, তোমার মেমরির নেক্স অংশে সেকেন্ড/পরেরজন কে চিনে রাখো
      current = new_node_in_heap;
      // কারেন্ট, তুমি এবার পরের জনকে ধর
    }
  }

  PrintNodes(head);

  // EOF
} // DONE