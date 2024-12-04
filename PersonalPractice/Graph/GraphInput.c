#include <stdio.h>
#include <stdlib.h>

#define max 10

int graph[max][max] = {0};
int indices[110] = {0};
int ind_count = 0, starting;

int main(void) {

  while (1) {
    int first, second, weight;
    scanf("%d %d %d", &first, &second, &weight);
    graph[first][second] = weight;
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