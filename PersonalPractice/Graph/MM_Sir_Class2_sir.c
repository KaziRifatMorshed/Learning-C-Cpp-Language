/*
linked list implementation of graph

1 2 5
1 4 6
2 3 2
2 6 3
3 5 4
4 7 7
5 6 6
6 7 5
0 0 0
1 7

    1 2 5 1 4 6 2 3 2 2 6 3 3 5 4 4 7 7 5 6 6 6 7 5 0 0 0 1 7
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
  int nodeid;
  int cost;
  struct node *link;
};

struct node nodes[100];
int node_count = 0;
int source = 0, destination = 0;

// add a node in the list.
void add_node(int nodeid) {
  int i = 0;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].nodeid == nodeid) {
      return;
    }
  }
  nodes[node_count].nodeid = nodeid;
  nodes[i].link = NULL;
  node_count++;
}

// nodeid is a node in the node list. link_id is a node which is linked with
// nodeid.
void add_link(int nodeid, int link_id, int link_cost) {
  int i = 0;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].nodeid == nodeid) {
      break;
    }
  }

  struct node *l;
  l = (struct node *)malloc(sizeof(struct node));
  l->nodeid = link_id;
  l->cost = link_cost;
  l->link = NULL;

  if (nodes[i].link == NULL) {
    nodes[i].link = l;
  } else {
    struct node *p = nodes[i].link;
    while (p->link != NULL) {
      p = p->link;
    }
    p->link = l;
  }
}

// whether nodeid is included in the path.
int is_in_path(int *path, int count, int nodeid) {
  int i = 0;
  for (i = 0; i < count; i++) {
    if (path[i] == nodeid) {
      return 1;
    }
  }
  return 0;
}

// recursively go to all the possible way from the last node of the path.
void search(int *path, int count) {
  int current_node = path[count - 1];

  if (current_node == destination) {
    printf("\n");
    int j = 0;
    for (j = 0; j < count; j++) {
      printf(" %d ", path[j]);
    }
    return;
  }

  int i = 0;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].nodeid == current_node) {
      break;
    }
  }

  struct node *p = nodes[i].link;

  while (p != NULL) {
    int possible_id = p->nodeid;

    if (is_in_path(path, count, possible_id) == 0) {
      path[count] = possible_id;
      count++;
      search(path, count);
      count--;
    }

    p = p->link;
  }
}

int main(void) {
  freopen("input.txt", "r", stdin);
  int a, b, c;
  while (1) {
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) {
      break;
    }

    add_node(a);
    add_node(b);
    add_link(a, b, c);
    add_link(b, a, c);
  }

  scanf("%d%d", &source, &destination);
  int path[100];
  path[0] = source;

  search(path, 1);

  printf("\ntest");
}