// KAZI RIFAT MORSHED 230220
// DONE
/*
You will have to create a linked list with negative and positive integers in
such a way that negatives and positives will appear one after another as far as
possible. Look at the sample inputs and outputs. The first line of the input
shows the number of elements in the list. The next line contains the elements.
The output (the final list) must be printed using a recursive function. (60
Marks)

Sample Input 1:
10
2  3  4  -1  -6  -7  -8  -9  -10  10
Sample Output 1:
2 -1 3 -6 4 -7 10 -8 -9 -10

Sample Input 2:
10
-2 3 4 1 6 -7 -8 -9 10 11
Sample Output 2:
-2  3  -7  4  -8  1  -9  6  10  11

Marks Distribution
-------------------------------
1. creating the output in the expected way. (40)
                                    ordering of elements: 30
                                    basic requirements: 10
2. showing the output recursively (20)
*/

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

#define make_node ((node *)(malloc(sizeof(node))));
#define test_negative (num < 0)
#define test_positive (num > 0)

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
node *search_positive(node *n) {
  // এই ফাংশন দুইটা পজিটিভ খুজে বের করে প্রথম পজিটিভ নম্বর
  // এর লোকেশন রিটার্ন করবে যাতে এই আগের নোড এর পরে ও
  // সেকেন্ড পজিটিভের আগে নতুন নোড এড করা যায়
  while (n->next != NULL) { // linear search till last
    if ((n->id) > 0 && (n->next->id > 0)) {
      return n;
    }
    n = n->next;
  }
  return n;
}

// search two corresponding negative number
node *search_negative(node *n) { // returning previous node so that I can add
  while (n->next != NULL) {      // linear search till last
    if ((n->id) < 0 && (n->next->id < 0)) {
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

      if (test_positive) { // search for last neg
        node *search_result = search_negative(head);

        n->next = search_result->next;
        search_result->next = n;
      }
      if (test_negative) { // search for last positive
        node *search_result = search_positive(head);

        n->next = search_result->next;
        search_result->next = n;
      }
    }
  }

  // output
  _print_nodes(head);
  //
  // end of main()
} // DONE