// distinct cycle detection
// 1 2 1 1 6 1 1 100 1 2 3 1 3 100 1 3 4 1 3 5 1 4 6 1 5 100 1 0 0 0

#include <stdio.h>
#include <stdlib.h>

struct node {
  int nodeid;
  int cost;
  struct node *link;
};

struct node nodes[100];
int nodecount = 0;
int source = 0, destination = 0;

int cycles[1000][100];
int cyclecount = 0;

// add a node in the list.
void addnode(int nodeid) {
  int i = 0;
  for (i = 0; i < nodecount; i++) {
    if (nodes[i].nodeid == nodeid) {
      return;
    }
  }

  nodes[nodecount].nodeid = nodeid;
  nodes[i].link = NULL;
  nodecount++;
}

// nodeid is a node in the node list. linkid is a node which is linked with
// nodeid.
void addlink(int nodeid, int linkid, int linkcost) {
  int i = 0;
  for (i = 0; i < nodecount; i++) {
    if (nodes[i].nodeid == nodeid) {
      break;
    }
  }

  struct node *l;
  l = (struct node *)malloc(sizeof(struct node));
  l->nodeid = linkid;
  l->cost = linkcost;
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
int isinpath(int *path, int count, int nodeid) {
  int i = 0;
  for (i = 0; i < count; i++) {
    if (path[i] == nodeid) {
      return 1;
    }
  }
  return 0;
}

void printpath(int *path, int count) {
  printf("\n");
  int i = 0;
  for (i = 0; i < count; i++) {
    printf(" %d ", path[i]);
  }
}

int comparecycle(int *path, int count) {
  int i = 0, c = 0;

  for (c = 0; c < cyclecount; c++) {
    if (comparecycle(path, count) == 1) { // ?
      return 1;
    }
  }
  return 0;
}

int countnodesincycle(int cindex) {
  int i = 0;
  while (1) {
    if (cycles[cindex][i] == -1) {
      return i;
    }
    i++;
  }
  return 0;
}

int compcycle(int *path, int count, int cindex) {
  int i = 0, c = cindex;
  for (i = 0; i < count; i++) {
    int got = 0, j = 0;
    while (1) {
      if (cycles[c][j] == -1) {
        break;
      }
      if (cycles[c][j] == path[i]) {
        got = 1;
        break;
      }
      j++;
    }
    if (got == 0) {
      return 0;
    }
  }

  if (countnodesincycle(cindex) == count) {
    return 1;
  }
  return 0;
}

void storecycle(int *path, int count) {
  if (comparecycle(path, count) == 1) {
    return;
  }

  int i = 0;
  for (i = 0; i < count; i++) {
    cycles[cyclecount][i] = path[i];
  }
  cycles[cyclecount][i] = -1;
  cyclecount++;

  printpath(path, count);
}

// recursively go to all the possible way from the last node of the path.
void search(int *path, int count) {
  int cnode = path[count - 1];

  /*if (cnode == destination)
  {
      printf ("\n");
      int j =0;
      for (j=0;j<count;j++) { printf(" %d ", path[j]); }
      return;
  }*/

  int i = 0;
  for (i = 0; i < nodecount; i++) {
    if (nodes[i].nodeid == cnode) {
      break;
    }
  }

  struct node *p = nodes[i].link;

  while (p != NULL) {
    int possibleid = p->nodeid;

    if (isinpath(path, count, possibleid) == 0) {
      path[count] = possibleid;
      count++;
      search(path, count);
      count--;
    } else {
      if (count > 2 && possibleid == path[0]) {
        // printf ("test");
        storecycle(path, count);

        // printpath (path, count);
      }
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

    addnode(a);
    addnode(b);
    addlink(a, b, c);
    addlink(b, a, c);
  }

  // scanf ("%d%d", &source, &destination);
  int path[100];
  path[0] = source;

  int ii = 0;
  for (ii = 0; ii < nodecount; ii++) {
    path[0] = nodes[ii].nodeid;
    search(path, 1);
  }

  search(path, 1);

  printf("\ntest");
}