#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

struct node {
  int node_id, cost;
  struct node *link;
};
typedef struct node NODE;
NODE nodes[100];
int node_count = 0;
int source = 0, dest = 0;

void addNode(int nodeid) {
  int i;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].node_id == nodeid) {
      return;
    }
  }
  nodes[node_count].node_id = nodeid;
  nodes[node_count].link = NULL;
  node_count++;
}

void addLink(int nodeid_link_from, int link_id, int link_cost) {
  int i;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].node_id == nodeid_link_from) {
      break;
    }
  }
  NODE *l = (NODE *)malloc(sizeof(NODE));
  l->node_id = link_id;
  l->cost = link_cost;
  l->link = NULL;

  if (nodes[i].link == NULL) {
    nodes[i].link = l;
  } else {
    NODE *p = nodes[i].link;
    while (p->link != NULL) {
      p = p->link;
    }
    p->link = l;
  }
}

int is_in_path(int *path, int count, int nodeid) {
  for (int i = 0; i < count; i++) {
    if (path[i] == nodeid) {
      return true;
    }
  }
  return false;
}

void search(int *path, int count) {
  int current_node = path[count - 1];
  if (current_node == dest) {
    printf("\n");
    for (int j = 0; j < count; j++) {
      printf(" %d ", path[j]);
    }
    return;
  }

  for (int i = 0; i < node_count; i++) {
    if (nodes[i].node_id == current_node) {
      NODE *p = nodes[i].link;
      while (p != NULL) {
        int possible_id = p->node_id;
        if (!is_in_path(path, count, possible_id)) {
          path[count] = possible_id;
          count++;
          search(path, count);
          count--;
        }
        p = p->link;
      }
      break;
    }
  }
}

int main(void) {
  int a, b, c;
  while (1) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) {
      break;
    }
    addNode(a), addNode(b);
    addLink(a, b, c), addLink(b, a, c);
  }
  scanf("%d %d", &source, &dest);

  int path[100];
  path[0] = source;
  search(path, 1);

  printf("\n...The End...\n");
  return 0;
}
