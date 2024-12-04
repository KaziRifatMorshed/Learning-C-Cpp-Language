/*4. Suppose you have an integer array that can contain 1000 elements. Scan the
 * first 10 elements in the array. Now, put 45 at the 4th position so that the
 * existing elements from the 4th to the 10th position go the 5th to 11th
 * position respectively.*/
#include <stdio.h>
int main(void) {
  int arr[1000];
  printf("put first 10 element : ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  // arr[3] = 45; ERROR // CAREFUL
  for (int i = 10; i >= 4; i--) { // পিছন থেকে এক ঘর সরাতে সরাতে আসব
    arr[i] = arr[i - 1];
  }
  arr[3] = 45; // আগে যায়গা ফাকা করব তার পর নতুনকে ঢুকাবো, এটা সহজ
  // Now, print them
  for (int i = 0; i < 11; i++) {
    printf("%d ", arr[i]);
  }
} // DONE

/* ৮ নং লাইন থাকলে যে ভুল হয়ঃ

put first 10 element : 1 2 3 4 5 6 7 8 9 10
1 2 3 45 45 5 6 7 8 9 10 ⏎
১২ নন্বরে থাকলে(সঠিক) ঃ
put first 10 element : 1 2 3 4 5 6 7 8 9 10
1 2 3 45 4 5 6 7 8 9 10 ⏎
*/

// Kazi Rifat Morshed
// ID 230220 (the sole linux user ;)