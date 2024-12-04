// 01 April 2024
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
  // আমি এড্রেস(পয়েন্টার) এর একটা রিকার্সিভ লুপ তৈরি করেছি
  // linked list এর লাস্ট নোডের সাথে কোনো নোড যুক্ত না থাকায় সেখানে NULL আছে,
  // আমার রিকার্শন(লুপিং বা ইটারেশন) ঐ পর্যন্ত চলবে
  printf("%d ", n->id);
  return _print_nodes(n->next); // পরের নোডের এড্রেস পাস করে দিচ্ছি
}

// search two corresponding negative number
node *search(node *n, int key) { // returning previous node so that I can add
  while (n->next != NULL) {      // linear search till last
    if (((key) <= (n->next->id))) {
      // নতুন যেটা এড করব সেটা একএককরে খুজতে থাকা পরেরটার থেকে ছোট-অথবা-সমান কিনা
      return n;
    }
    n = n->next;
  }
  return n;
}

int main(void) {
  node *head;
  int num_inp = 0;
  scanf("%d", &num_inp);

  // সবগুলো নোড ইনপুট নেওয়ার জন্য লুপ
  for (int i = 0; i < num_inp; i++) {
    int num;           // node id of each new node
    scanf("%d", &num); // node id of per node

    // node *n = make_node; // new node is created here
    node *n = (node *)(malloc(sizeof(node)));
    n->id = num;
    n->next = NULL; // প্রতিবার নতুন নোড তৈরি হলে তার নেক্সটে NULL এড করব কেননা এটা
                    // ফিউচারে লাস্ট নোড হতেও পারে, নাও হতে পারে; যদি না হয় তখন
                    // এটার নেক্সটে NULL কে রিপ্লেস করে পরবর্তী এড্রেস যোগ করা হবে

    if (i == 0) { // head case
      head = n; // চোখ বন্ধ করে হেড নোড এড করব, আপাতত আর কোনো কাজ নাই
    } else {

      node *search_result = search(head, num);

      n->next = search_result->next;
      search_result->next = n;
    }
  }

  _print_nodes(head);
  printf("\n");
  _print_nodes(head->next);
  // end of main()
}