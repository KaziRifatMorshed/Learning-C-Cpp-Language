/*Problem 20:
All of you have seen the tower of Hanoi. You have 3 pillars 'a', 'b' and 'c',
and you need transfer all disks from one pillar to another. Conditions are, only
one disk at a time is movable, and you can never place a larger disk over a
smaller one. Write a recursive solution to print the moves that simulates the
task, a -> b means move the topmost of tower a to tower b.
Input:
3
Output:
a -> c
a -> b
c -> b
a -> c
b -> a
b -> c
a -> c*/
#include <stdio.h>

void hanoi(int n, char source, char dest, char temp) {
  if (n == 1) {
    printf(" %c -> %c\n", source, dest);
    return; // sadly, I forgot
  }
  hanoi(n - 1, source, temp, dest);
  printf(" %c -> %c\n", source, dest);
  hanoi(n - 1, temp, dest, source);
}
int main(void) {
  int n = 0;
  scanf("%d", &n);
  hanoi(n, 'a', 'c', 'b');
} // complete
  //
  //
  /*
  // s source, m middle, d destination
  void tower(int n, char s, char m, char d)
  {
      if(n>0)
      {
          // first move n-1 disks from source to middle,
          // using destination as middle pillar
          tower(n-1, s, d, m);
          // the only left nth disk can be moved directly from source to
            destination
              printf("%c -> %c\n", s, d);
            // on first step we've sent n-1 disks to the middle,
            // and now, from the middle pillar, we'll transfer them back to
    destination
            // using the source as the middle pillar
            tower(n-1, m, s, d);
        }
    }
  
    int main()
    {
        int n;
        scanf("%d", &n);
        tower(n, 'a', 'b', 'c');
        return 0;
    }
    */