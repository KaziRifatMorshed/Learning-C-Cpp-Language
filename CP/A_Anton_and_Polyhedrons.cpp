#include <cstring>
#include <iostream>
using namespace std;

int main(void) {
  int t = 0;
  int sum = 0;
  char str[20];
  cin >> t;
  while (t--) {
    cin >> str;
    if (strcmp(str, "Tetrahedron") == 0) { // careful, not 1
      sum += 4;
    } else if (strcmp(str, "Cube") == 0) {
      sum += 6;
    } else if (strcmp(str, "Octahedron") == 0) {
      sum += 8;
    } else if (strcmp(str, "Dodecahedron") == 0) {
      sum += 12;
    } else if (strcmp(str, "Icosahedron") == 0) {
      sum += 20;
    }
  }
  cout << sum;
} // DONE