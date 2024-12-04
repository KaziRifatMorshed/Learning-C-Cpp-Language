// 230220
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
typedef int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    ulli ques_no = 0, contest_no = 0, sum = 0;
    string str;
    get(ques_no), get(contest_no); // Separate get statements for clarity
    get(str);
    ulli A[7] = {0};

    for (char c : str) {
      //   cout << c;
      ulli temp = (ulli)(c - 'A');
      A[temp]++;

      //   for (ulli i : A) {
      //     cout << A[i] << " ";
      //   }
      //   puts("\n");
    }

    for (auto i : A) {
      //   cout << A[i] << " ";
      if (A[i] >= contest_no) {
        // sum += contest_no;
        continue;
      }
      sum += contest_no - A[i];
    }
    // cout << endl << (7 * contest_no) - sum << endl;
    cout << sum << endl;

    // while end
  }
  // the end
} // incomplete