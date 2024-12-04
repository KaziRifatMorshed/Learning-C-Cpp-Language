/*Vasya has recently learned to type and log on to the Internet. He immediately
entered a chat room and decided to say hello to everybody. Vasya typed the word
s. It is considered that Vasya managed to say hello if several letters can be
deleted from the typed word so that it resulted in the word "hello". For
example, if Vasya types the word "ahhellllloou", it will be considered that he
said hello, and if he types "hlelo", it will be considered that Vasya got
misunderstood and he didn't manage to say hello. Determine whether Vasya managed
to say hello by the given word s. Input

The first and only line contains the word s, which Vasya typed. This word
consisits of small Latin letters, its length is no less that 1 and no more than
100 letters. Output

If Vasya managed to say hello, print "YES", otherwise print "NO".
https://codeforces.com/problemset/problem/58/A 
*/
#include "iostream"
#include <cstring>
using namespace std;
int main(void) {
  char str[102];
  cin >> str;
  //  int len = strlen(str);
  int h = 0, e = 0, l = 0, o = 0;

  for (h; str[h] != 'h'; h++) {
    for (e = h; str[e] != 'e'; e++) {
      for (l = e; str[l] != 'l'; l++) {
        // for (l = l; str[l] != 'l'; l++) {
        for (o = l; str[o] != 'o'; o++) {
        }
        //}
      }
    }
  }

  if (h < e && e < l && l < o) {
    cout << "YES";
  } else {
    cout << "NO";
  }
} // incomplete