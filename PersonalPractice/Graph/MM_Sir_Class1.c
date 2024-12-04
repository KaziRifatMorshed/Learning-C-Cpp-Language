#include <stdio.h>
#define true 1
#define false 0
/*
You can use the following input:
1 2 2
1 3 2
2 4 3
3 4 3
4 5 4
4 6 4
0 0 0
1 6
*/
// 1 2 2 1 3 2 2 4 3 3 4 3 4 5 4 4 6 4 0 0 0 1 6

int graph[100][100] = {0};
int indices[100];
int indcount = 0;

int start_node, end_node;

int getindex(int node) {
  int i = 0;
  // search the node to get index
  for (i = 0; i < indcount; i++) {
    if (indices[i] == node) {
      return i; // in case found
    }
  }
  // in case not found: add
  indices[indcount] = node;
  indcount++;
  return (indcount - 1);
}

int is_present_in_path(int *path, int count, int ind) {
  for (int i = 0; i < count; i++) {
    if (path[i] == ind) {
      return true;
    }
  }
  return false;
}

void print_path(int *path, int count) {
  int i = 0;
  printf("\n");
  for (i = 0; i < count; i++) {
    printf(" %d ", indices[path[i]]); // ?????
  }
}

void search(int *path, int count) {
  // current node = path[count-1];
  int cind = path[count - 1];
  // printf ("\nstart = %d", indices[cind]);
  int i = 0;
  for (i = 0; i < indcount; i++) {
    if (graph[cind][i] > 0) {
      if (is_present_in_path(path, count, i) == 0) {
        path[count] = i;
        count++;
        if (i == end_node) {
          print_path(path, count);
        }
        search(path, count);
        count--;
      }
    }
  }
  // printf ("\ncannot go.");
}

int main() {
  int a, b, c;
  while (1) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) { // stop getting input
      break;
    }

    int i1 = getindex(a);
    int i2 = getindex(b);

    graph[i1][i2] = c;
    graph[i2][i1] = c;
  }

  int input_start, input_end;
  printf("input start: ");
  scanf("%d", &input_start);
  printf("input end: ");
  scanf("%d", &input_end);

  int path[100], count = 0;

  path[0] = getindex(input_start);
  count++;
  end_node = getindex(input_end);

  search(path, count);

  return 0;
}
