#include <iostream>
#include <ostream>

int main(void) {
  int max = 0, max_index = 0, min_index = 0, min = 100, n = 0;
  int arr[100] = {0};

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];

    if (max < arr[i]) {
      max = arr[i];
      max_index = i;
      // std::cout << "max" << max << "in index" << max_index << std::endl;
    }
    if (min >= arr[i]) {
      min = arr[i];
      min_index = i;
      // std::cout << "min" << min << "in index" << min_index << std::endl;
    }
  }

  int result = ((max_index) + (n - min_index - 1));
  if (max_index > min_index) {
    result--;
  }
  std::cout << result;
}