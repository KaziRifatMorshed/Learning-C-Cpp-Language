#include <bits/stdc++.h>
#include <vector>
using namespace std;
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define true 1
#define false 0

int minn(int a, int b, int c) {
  if (a < b) {
    if (a < c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b < c) {
      return b;
    } else {
      return c;
    }
  }
}

int main(void) {
  int n = 0, count_one = 0, count_two = 0, count_three = 0;
  cin >> n;
  int arr[5000][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0];
    arr[i][1] = true;
    if (arr[i][0] == 1) {
      count_one++;
    }
    if (arr[i][0] == 2) {
      count_two++;
    }
    if (arr[i][0] == 3) {
      count_three++;
    }
  }
  // min team number
  int min = minn(count_one, count_two, count_three);
  // cout << min << endl;
  if (min == 0) {
    cout << 0;
  } else {
    int total_teams = min;
    cout << total_teams << endl;
    for (int i = 0; i < total_teams; i++) {
      for (int j = 0; j < n; j++) {
        if (arr[i][0] == 1) {
          arr[i][1] = false;
          cout << i + 1 << " ";
          break;
        }
      }
      for (int j = 0; j < n; j++) {
        if (arr[i][0] == 2) {
          arr[i][1] = false;
          cout << i + 1 << " ";
          break;
        }
        for (int j = 0; j < n; j++) {
          if (arr[i][0] == 3) {
            arr[i][1] = false;
            cout << i + 1 << endl;
            break;
          }
        }
      }
    }
  }
}