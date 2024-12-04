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
int source = 0, dest = 0, totalWeight = 0;

// ----------------------------------------------------

void addNode(int new_node_id) {
    int i;
    // search
    for (i = 0; i < node_count; i++) {
        // in case found
        if (nodes[i].node_id == new_node_id) { // desired node already exists
            return;
        }
    }
    // in case not found, add the node and update node_count
    nodes[node_count].node_id = new_node_id, nodes[node_count].link = NULL,
            node_count++; // node এড করছি, এখানে কস্ট আসবে না
}
// ----------------------------------------------------

// nodeid is a node in the node list. link_id is a node which is linked with
// nodeid.

void addLink(int link_from, int new_node_id, int cost) {
    // search culprit
    int i;
    for (i = 0; i < node_count; i++) {
        if (nodes[i].node_id == link_from) {
            break;
        }
    } // search completed, value of i is saved

    // create new node, ultimately making the system 2D
    NODE *n = (NODE *) malloc(sizeof(NODE));
    n->node_id = new_node_id, n->cost = cost, n->link = NULL;

    /*
    nodes[i].link = n; // adding newly created node after main array
  BUT IT IS NOT THAT SIMPLE
    */
    if (nodes[i].link == NULL) {
        nodes[i].link = n;
    } else { // traverse to the last of the line "until link:NULL found" and add
        // newly one at that NULL point
        NODE *temp = nodes[i].link;
        while (temp->link != NULL) {
            // while (nodes[i].link != NULL) { // MISTAKE
            temp = temp->link;
            // temp = nodes[i].link; // MISTAKE
        }
        // nodes[i].link = n; // MISTAKE
        temp->link = n; // overwriting NULL
    }
}
// ----------------------------------------------------

int is_in_path(int *path, int path_temp_count, int target_node_id) {
    int i;
    for (int i = 0; i < path_temp_count; ++i) {
        if (path[i] == target_node_id) {
            return true;
        }
    }
    return false;
}
// ----------------------------------------------------

// recursively go to all the possible way from the last node of the path.
void search(int *path, int count) { // remember int count
    int _current_ = path[count - 1];

    if (_current_ == dest) {
        for (int i = 0; i < count; ++i) {
            printf(" %d ", path[i]);

        }
        printf("\t total weight = %d", totalWeight);
        totalWeight = 0;
        printf("\n");
        return; // base case
    }

    // search for _current_'s index in the NODE database
    int i;
    for (i = 0; i < node_count; ++i) {
        if (nodes[i].node_id == _current_) {
            break;
        }
    } // _current_'s index, `i` is saved now

    // difficult part starts

    NODE *p = nodes[i].link; // store the address of next node

    while (p != NULL) { // this while loop will determine multiple lines
        int _next_node_id_ = p->node_id;
        if (is_in_path(path, count, _next_node_id_) == false) {
            path[count] = _next_node_id_;
            count++;
            // totalWeight += nodes[i].cost; // WRONG
            // node[i] হলো 2D এরে এর হেডারের মত যে হেড হয়ে কিভাবে কস্ট স্টোর করবে ?
            // কস্ট স্টোর করতে পারবে লিংক লিস্ট আকারে থাকা নোড-লিংক গুলো
            totalWeight += p->cost;
            search(path, count);
            count--;
        }
        p = p->link;
    }


}
// ----------------------------------------------------
// ----------------------------------------------------

int main(void) {
// 1 2 5 1 4 6 2 3 2 2 6 3 3 5 4 4 7 7 5 6 6 6 7 5 0 0 0 1 7
    int a, b, c;
    while (true) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        addNode(a), addNode(b);
        addLink(a, b, c), addLink(b, a, c);
    }

    // int source = -1, dest = -1; // এরা তো গ্লোবালি ডিক্লিয়ার করাই আছে
    scanf("%d %d", &source, &dest);
    int path[100]; // to store paths

    path[0] = source;

    search(path, 1);
    // path[0] = source; এড করেছি বলে কারেন্ট কাউন্ট ১ পাস করে দিয়েছি

    printf("\nThe end...");
    // end
}
// 1 2 5 1 4 6 2 3 2 2 6 3 3 5 4 4 7 7 5 6 6 6 7 5 0 0 0 1 7
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