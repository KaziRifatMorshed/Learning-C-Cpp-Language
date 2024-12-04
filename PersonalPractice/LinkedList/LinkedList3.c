#include <stdio.h>
#include <stdlib.h>
// INCOMPLETE
struct linked_list {
  int number;
  struct linked_list *next;
};
typedef struct linked_list node;

void create(node *);
int count(node *);
void print(node *);

int main(void) {
  printf("NOTE: -1 will terminate the program\n");
  node *head;
  /*  // ANSI C বই তে এখানে দেওয়া ছিলো
      void create(node *p);
      int count(node *p);
      void print(node *p);
   * */
  head = (node *)malloc(sizeof(node));
  create(head);
  printf("\n");
  print(head);
  printf("\n\nNumber of items = %d \n", count(head));
  free(head);
}

void create(node *list) {
  printf("input a number : ");
  scanf("%d", &list->number);

  if (list->number == -1) {
    list->next = NULL;
  } else { // create next node
    list->next = (node *)malloc(sizeof(node));
    create(list->next); // recursion occurs
  }
}

int count(node *list) {
  if (list->next == NULL) {
    return 0;
  } else {
    return 1 + count(list->next);
  }
}

void print(node *list) { // CAREFUL CAREFUL about this function
  if (list->next != NULL) {
    printf("[%d]->", list->number); // print current item

    // now, দূর্দর্শী এজ কেইস
    if (list->next->next == NULL) {
      printf("[%d]", list->next->number); // print next's item
    }
    print(list->next); // recursion, passing next one
  }
}
