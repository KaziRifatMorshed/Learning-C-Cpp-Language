#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// GPT
#define true 1
#define false 0
#define INF INT_MAX

struct node {
    int node_id, cost;
    struct node *link;
};
typedef struct node NODE;

NODE nodes[100];
int node_count = 0;
int source = 0, dest = 0;

// Function to add a node to the graph
void addNode(int new_node_id) {
    int i;
    for (i = 0; i < node_count; i++) {
        if (nodes[i].node_id == new_node_id) {
            return;
        }
    }
    nodes[node_count].node_id = new_node_id;
    nodes[node_count].link = NULL;
    node_count++;
}

// Function to add a link between two nodes with a cost
void addLink(int link_from, int new_node_id, int cost) {
    int i;
    for (i = 0; i < node_count; i++) {
        if (nodes[i].node_id == link_from) {
            break;
        }
    }
    NODE *n = (NODE *) malloc(sizeof(NODE));
    n->node_id = new_node_id;
    n->cost = cost;
    n->link = nodes[i].link;
    nodes[i].link = n;
}

// Dijkstra's algorithm to find the shortest path
void dijkstra(int source) {
    int i, u, v;
    int dist[node_count];
    int visited[node_count];

    for (i = 0; i < node_count; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    dist[source] = 0;

    for (i = 0; i < node_count - 1; i++) {
        int min_dist = INF;
        for (v = 0; v < node_count; v++) {
            if (!visited[v] && dist[v] < min_dist) {
                min_dist = dist[v];
                u = v;
            }
        }
        visited[u] = true;

        NODE *p = nodes[u].link;
        while (p != NULL) {
            v = p->node_id;
            if (!visited[v] && dist[u] != INF && dist[u] + p->cost < dist[v]) {
                dist[v] = dist[u] + p->cost;
            }
            p = p->link;
        }
    }

    for (i = 0; i < node_count; i++) {
        printf("Distance from %d to %d: %d\n", source, nodes[i].node_id, dist[i]);
    }
}

int main(void) {
    int a, b, c;
    while (true) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        addNode(a);
        addNode(b);
        addLink(a, b, c);
        addLink(b, a, c);
    }

    scanf("%d %d", &source, &dest);

    dijkstra(source);

    return 0;
}

