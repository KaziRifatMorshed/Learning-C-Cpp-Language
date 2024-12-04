// 230220
#include <bits/stdc++.h>
typedef signed long long int ulli;
using namespace std;

#define print_hash cout << "##"
#define print_dot cout << ".."
#define ENDL cout << "\n"

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int row = 1; row <= (n); row++) {
      if (row % 2 == 1) { // if row is odd
        for (int col = 1; col <= n; col++) {
          if (col % 2 == 1) {
            print_hash;
          } else {
            print_dot;
          }
        }
        ENDL;
        //
        for (int col = 1; col <= n; col++) {
          if (col % 2 == 1) {
            print_hash;
          } else {
            print_dot;
          }
        }
        //
        ENDL;
      } else {
        for (int col = 1; col <= n; col++) {
          if (col % 2 == 1) {
            print_dot;
          } else {
            print_hash;
          }
        }
        ENDL;
        //
        for (int col = 1; col <= n; col++) {
          if (col % 2 == 1) {
            print_dot;
          } else {
            print_hash;
          }
        }
        //

        ENDL;
      }
    }
    // while end
  }
  // ENDL;
  //  the end
} // DONE