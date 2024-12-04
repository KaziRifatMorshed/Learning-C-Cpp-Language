#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

struct linked_list {
  int id;
  struct linked_list *next;
};

typedef struct linked_list node; // টাইপডেফ আমার লেখার কষ্ট কমিয়ে দিবে
// এই লাইনের পর থেকে struct linked_list না লিখে আমি শুধু node লিখলে কম্পিউটার বুঝতে
// পারবে আমি কি লিখতে চেয়েছি

void _print_nodes(node *n) {
  if (n == NULL) { // বেইস কেইস
    return;
  }
  printf("%d ", n->id);
  return _print_nodes(n->next);
}

// search two corresponding negative number
node *search(node *n, int key) { // returning previous node so that I can add
  if (n->id == key) {
    return n;
  }
  while (n->next != NULL) { // linear search till last
    if (n->id == key) {
      return n;
    }
    n = n->next;
  }
  return NULL;
}

int main(void) {
  node *head, *current;
  int num_inp = 0;
  scanf("%d", &num_inp);

  // সবগুলো নোড ইনপুট নেওয়ার জন্য লুপ
  for (int i = 0; i < num_inp; i++) {
    int num;           // node id of each new node
    scanf("%d", &num); // node id of per node

    node *n = (node *)(malloc(sizeof(node)));
    n->id = num;
    n->next = NULL;
    if (i == 0) {         // head case
      head = current = n; // চোখ বন্ধ করে হেড নোড এড করব, আপাতত আর কোনো কাজ নাই
    } else {
      current->next = n;
      current = n;
    }
  }

  // deleting
  int key;
  scanf("%d", &key);
  node *search_result = search(head, key);
  if (search_result == head) {
    node *temp = head;
    head = head->next;
    free(temp);
  } else if (search_result != NULL) {
    search_result->next = search_result->next->next;
    free(search_result->next);
  }

  // output
  _print_nodes(head);
  //
  // end of main()
} // DONE