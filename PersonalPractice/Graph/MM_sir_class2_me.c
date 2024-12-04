/*
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
*/
// 1 2 5 1 4 6 2 3 2 2 6 3 3 5 4 4 7 7 5 6 6 6 7 5 0 0 0 1 7
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

struct node {
  int node_id, cost;
  struct node *link;
};
typedef struct node NODE;
NODE nodes[100]; // this is 1D, will be 2D later, sad
int node_count = 0;
int source = 0, dest = 0;

// ----------------------------------------------------

void addNode(int nodeid) {
  int i;
  // search now
  for (i = 0; i < node_count; i++) {
    if (nodes[i].node_id == nodeid) {
      return; // if found, terminate the function as no need to add a node
    }
  }
  // in case not found, add the node and update node_count
  nodes[node_count].node_id = nodeid; // here node count and I are same
  nodes[node_count].link = NULL; // node এড করছি, এখানে কস্ট আসবে না
  node_count++;
} // easy now

// ----------------------------------------------------

// nodeid is a node in the node list. link_id is a node which is linked with
// nodeid.

void addLink(int nodeid_link_from, int link_id, int link_cost) {
  int i;
  // search
  for (i = 0; i < node_count; i++) {
    if (nodes[i].node_id == nodeid_link_from) {
      break; // if found, add the link //
             // i is saved now //
    }
  }

  // creating new node
  NODE *l = (NODE *)malloc(sizeof(NODE));
  l->node_id = link_id; // new node er id
  l->cost = link_cost;
  l->link = NULL;

  // linking node
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

// ----------------------------------------------------

int is_in_path(int *path, int count, int nodeid) {
  int i;
  for (i = 0; i < count; i++) {
    if (path[i] == nodeid) {
      return true;
    }
  }
  return false;
}

// ----------------------------------------------------

// recursively go to all the possible way
// from the last node of the path.
void search(int *path, int count) {
  int current_node = path[count - 1]; // for being recursive

  // print nodes
  if (current_node == dest) {
    int j;
    for (j = 0; j < count; j++) {
      printf(" %d ", path[j]);
    }
    printf("\n");
    return;
  }

  int i;
  for (i = 0; i < node_count; i++) {
    if (nodes[i].node_id == current_node) {
      break;
    }
  }

  NODE *p = nodes[i].link;

  while (p != NULL) {
    int possible_id = p->node_id;

    if (is_in_path(path, count, possible_id) == false) {
      path[count] = possible_id;
      count++;
      search(path, count);
      count--;
    }

    p = p->link;
  }
}

// ----------------------------------------------------
// ----------------------------------------------------

int main(void) {
  // mara khaw
  int a, b, c;
  while (1) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) { // stop getting input
      break;
    }
    addNode(a);
    addNode(b);
    addLink(a, b, c);
    addLink(b, a, c);
  }

  scanf("%d%d", &source, &dest);
  int path[100];
  path[0] = source;

  search(path, 1);
  // path[0] = source; এড করেছি বলে কারেন্ট কাউন্ট ১ পাস করে দিয়েছি

  printf("...The End...");
  // end
}

/*
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

 ===================================

 /mnt/LearningClang/MM_sir_class2_me
1 2 5 1 4 6 2 3 2 2 6 3 3 5 4 4 7 7 5 6 6 6 7 5 0 0 0 1 7

 1  2  3  5  6  7
 1  2  6  7
 1  4  7
...The End...
Process finished with exit code 0


*/