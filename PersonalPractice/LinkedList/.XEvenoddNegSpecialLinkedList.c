#include "LinkedListHeader.h"

#define test_negative num < 0
#define test_even_positive (num > 0) && (num % 2 == 0)
#define test_odd_positive (num > 0) && (num % 2 != 0)

/* even positive will be last of the list
 * odd positive will at the first of the list
 * negative will be added at middle
 * 1 3 5 7 -1 -2 -3 -4 2 4 6 8
 *
 * আমার এপ্রোচঃ
 * হেড নোড একটা নম্বর ধরে রাখবে আর টেইল নোড একটা নম্বর ধরে রাখবে
 * ইনপুট নোড হয় হেডের আগে বা টেলের পরে বা সার্চ করে মাঝে এড হবে
 * */

node *search_middle(node *head, node *tail) { // search using loop
  // ফাকা যায়গা বা যেখানে এড করব তার আগের লোকেশন রিটার্ন করব
  node *return_variable = head;

  return return_variable;
}

void PrintLinkedList(node *vertex) {
  int counter = 0;
  while (vertex != NULL) {
    // NOT //while (vertex->next != NULL) { // NOT //
    printf("%d.[%d]\n", counter + 1, vertex->number);
    vertex = vertex->next; // for last node, this expression will copy NEXT's
    counter++;
  }
} // works

int main(void) {
  int q = 0;
  node *head, *tail, *current;

  printf("input some even positive, odd positive and negative "
         "numbers.\nquantity of input(max 100):");
  scanf("%d", &q);
  for (int i = 0; i < q; ++i) { // loop for getting input
    int num = 0;
    printf("\ninput a number: ");
    scanf("%d", &num);

    node *n = (node *)malloc(sizeof(node));
    n->number = num;
    n->next = NULL;

    if (i == 0) { // head case
      head = n;
      // current = n;
      tail = n;
    }
    if (i == (q - 1)) { // last case
      // tail = n; // bolte partesi na as position change kortesi
    }

    if (test_negative) { // negative
                         // add middle

    } else if (test_odd_positive) { // odd positive
      // add first
      n->next = head;                // ager head hoye jabe new node er next
      head = n;                      // update head
    } else if (test_even_positive) { // even positive
      // add last // add after tail and update tail
      tail->next = n; // ciniye dilam
      tail = n;       // to update tail
    } else {          // while input is ZERO, exit it
      printf("\nZERO is inputted, the program will now print all nodes and "
             "terminate immediately!");
      PrintLinkedList(head);
      exit(0);
    }
  }
  //
  PrintLinkedList(head);
  // end
}