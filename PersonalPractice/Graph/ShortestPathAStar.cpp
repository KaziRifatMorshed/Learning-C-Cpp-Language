#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstdbool>
// GPT
#define true 1
#define false 0
#define INF INT_MAX

// Structure to represent a node in the graph
struct node {
    int node_id, cost;
    struct node *link;
};
typedef struct node NODE;

// Structure to represent a node in the priority queue
struct pq_node {
    int node_id, cost;
};
typedef struct pq_node PQ_NODE;

// Global variables
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

// Heuristic function (Euclidean distance)
int heuristic(int node_id) {
    // In this example, we can assume a simple heuristic where we calculate
    // the Euclidean distance between the current node and the destination node
    // as the straight-line distance
    // You may adjust this heuristic based on the specific problem domain
    return abs(node_id - dest);
}

// A* algorithm to find the shortest path
void astar(int source, int dest) {
    int i;
    int dist[node_count];
    int visited[node_count];

    for (i = 0; i < node_count; i++) {
        dist[i] = INF;
        visited[i] = false;
    }

    dist[source] = 0;

    // Priority queue to store nodes based on estimated total cost
    PQ_NODE pq[node_count];
    int pq_size = 0;

    // Add the source node to the priority queue
    pq[pq_size].node_id = source;
    pq[pq_size].cost = heuristic(source);
    pq_size++;

    while (pq_size > 0) {
        // Extract the node with the minimum estimated total cost from the priority queue
        int min_index = 0;
        for (i = 1; i < pq_size; i++) {
            if (pq[i].cost < pq[min_index].cost) {
                min_index = i;
            }
        }

        int current_node_id = pq[min_index].node_id;
        int current_node_cost = pq[min_index].cost;

        // Remove the extracted node from the priority queue
        for (i = min_index; i < pq_size - 1; i++) {
            pq[i] = pq[i + 1];
        }
        pq_size--;

        visited[current_node_id] = true;

        // If the destination node is reached, break the loop
        if (current_node_id == dest) {
            break;
        }

        NODE *p = nodes[current_node_id].link;
        while (p != NULL) {
            int next_node_id = p->node_id;
            int next_node_cost = p->cost;

            if (!visited[next_node_id] && dist[current_node_id] != INF &&
                dist[current_node_id] + next_node_cost < dist[next_node_id]) {
                dist[next_node_id] = dist[current_node_id] + next_node_cost;

                // Add the next node to the priority queue with the updated estimated total cost
                pq[pq_size].node_id = next_node_id;
                pq[pq_size].cost = dist[next_node_id] + heuristic(next_node_id);
                pq_size++;
            }

            p = p->link;
        }
    }

    // Print the shortest distance from the source to each node
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

    astar(source, dest);

    return 0;
}
