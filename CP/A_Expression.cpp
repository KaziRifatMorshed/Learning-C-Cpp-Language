#include <algorithm>
#include <iostream>
int main(void) {
  int a = 0, b = 0, c = 0;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  int ans = a + b + c;
  ans = std::max(ans, a * b * c);
  ans = std::max(ans, (a + b) * c);
  ans = std::max(ans, (c + b) * a);
  std::cout << ans;
} // done