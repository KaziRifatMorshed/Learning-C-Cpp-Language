#include <stdio.h>
#include <stdlib.h>
struct node {
  int nid;
  struct node *n;
  struct node *prev;
};

void free_them(struct node *p) {
  while (p != NULL) {
    struct node *temp = p;
    free(p);
    p = temp;
  }
}

void PrintNodes(struct node *p) {
  while (p != NULL) {
    printf(" %d ", p->nid);
    p = p->n;
  }
}

void PrintNodesRev(struct node *p) {
  while (p != NULL) {
    printf(" %d ", p->nid);
    p = p->prev;
  }
}

int main(void) {
  int count = 0, i = 0;
  struct node *p, *start, *current, *end;

  printf("How many values do you need to store? ");
  scanf("%d", &i);

  while (count < i) {

    int nid = 0;
    printf("\nenter node id: ");
    scanf("%d", &nid);

    p = (struct node *)malloc(sizeof(struct node));
    p->nid = nid;
    /*new's init*/ p->n = NULL;
    /*new's init*/ p->prev = NULL; // new(?)

    if (count == 0) {
      start = p; // setting head
      // current = start;
      current = p;

    } else {
      p->prev = current; // new(?)
      current->n = p;
      // শোনো প্রথম বক্স, তোমার মেমরির নেক্সট অংশে সেকেন্ড/পরেরজন কে চিনে রাখো
      current = p;
      // কারেন্ট, তুমি এবার পরের জনকে ধর
    }
    if (count == i - 1) {
      end = p;
    }
    count++;
  }

  PrintNodes(start);
  PrintNodesRev(end); // WORKING

  // EOF
} // DONE