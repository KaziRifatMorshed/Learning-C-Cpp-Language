#include <iostream>
using namespace std;
int main(void) {
  unsigned int count_anton = 0, count_danik = 0, num_of_games = 0;
  char game_result[1000001] = {0};
  cin >> num_of_games >> game_result;

  for (int i = 0; game_result[i] != '\0'; i++) {
    if (game_result[i] == 'A') {
      count_anton++;
    } else {
      count_danik++;
    }
  }

  if (count_anton > count_danik) {
    cout << "Anton";
  } else if (count_anton < count_danik) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }
}// done