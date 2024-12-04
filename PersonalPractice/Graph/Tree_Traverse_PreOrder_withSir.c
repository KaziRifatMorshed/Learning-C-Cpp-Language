// Traversing tree
#include <stdio.h>
#include <stdlib.h>

struct tree_node {
  int node_id; //  left_node_id, right_node_id;
  struct tree_node *left, *right;
};
typedef struct tree_node NODE;

NODE *create_node(int n_id) {
  NODE *p = (NODE *)malloc(sizeof(NODE));
  p->node_id = n_id;
  p->left = NULL, p->right = NULL;
  return p;
}

// MOST INTERESTING THING
void add_node(int child_id, int parent_id, NODE *parent) {
  // at first, add node is ROOT
  if (parent == NULL) { // base case
    return; // in next recursion, if parent->left/right is found NULL then
            // recursion will be terminated
  }
  if (parent->node_id == parent_id) { // if targeted node for insertion found
    NODE *p = create_node(child_id);
    {
      if (parent->left == NULL) { //  if LEFT is empty, add in left
        parent->left = p;
      } else if (parent->right == NULL) { // left is not empty means right might
                                          // be empty, add there
        parent->right = p;
      } else {
        printf("\nWrong Case\n"); // better to be avoided
      }
    }
  } else {
    add_node(child_id, parent_id, parent->left);
    add_node(child_id, parent_id, parent->right);
  }
}

void print_tree(NODE *p) {
  if (p == NULL) {
    return;
  }
  printf("%d ", p->node_id);
  print_tree(p->left), print_tree(p->right);
}

int main(void) {
  NODE *root = (NODE *)malloc(sizeof(NODE));
  int current_node, parent_node;
  scanf("%d", &root->node_id);

  while (1) {
    scanf("%d %d", &current_node, &parent_node);
    if (current_node == 0 && parent_node == 0) {
      break;
    }
    add_node(current_node, parent_node, root);
  }
  print_tree(root);
  // end
} // DONE

/*
1
2 1
5 1
6 2
7 2
10 7
11 7
3 5
8 5
13 8
0 0
*/
// one output 1  2  6  7  10  11  5  3  8  13