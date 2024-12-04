#include <stdio.h>
#include <stdlib.h>

#define max 20

int graph[max][max] = {0};
int indices[110] = {0};
int ind_count = 0, starting;

void search() {}

int get_index(int node) {
  int i = 0;
  for (i = 0; i < ind_count; i++) {
    if (indices[i] == node) {
      return i;
    }
  }
  indices[ind_count] = node;
  ind_count++;
  return ind_count = 1;
}

int main(void) {

  while (1) {
    int first, second, weight;
    scanf("%d %d %d", &first, &second, &weight);
    // arr[first][second] = weight;
    // if (first == 0 && second == 0 && weight == 0) {
    //   break;
    // }

    int i1 = get_index(first);
    int i2 = get_index(second);

    graph[i1][i2] = weight;
    graph[i2][i1] = weight;

    if (first == 0 && second == 0 && weight == 0) {
      break;
    }
  }

  for (int i = 0; i < max; i++) {
    for (int j = 0; j < max; j++) {
      printf("%d ", graph[i][j]);
    }
    printf("\n");
  }
  // end
}

// prim, tilcal, all pari shortest path, dikstra