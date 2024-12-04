#include <stdio.h>
#include <stdlib.h>

struct node {
    int nodeid;
    int cost;
    struct node *link;
};

struct node nodes[100];
int nodecount = 0;

int cycles[1000][100];
int cyclecount = 0;

void addnode(int nodeid) {
    int i;
    for (i = 0; i < nodecount; i++) {
        if (nodes[i].nodeid == nodeid) {
            return;
        }
    }
    nodes[nodecount].nodeid = nodeid;
    nodes[nodecount].link = NULL;
    nodecount++;
}

void addlink(int nodeid, int linkid, int linkcost) {
    int i;
    for (i = 0; i < nodecount; i++) {
        if (nodes[i].nodeid == nodeid) {
            break;
        }
    }
    struct node *l = (struct node *) malloc(sizeof(struct node));
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

int isinpath(int *path, int count, int nodeid) {
    int i;
    for (i = 0; i < count; i++) {
        if (path[i] == nodeid) {
            return 1;
        }
    }
    return 0;
}

void printpath(int *path, int count) {
    printf("\n");
    int i;
    for (i = 0; i < count; i++) {
        printf(" %d ", path[i]);
    }
}

int comparepath(int *path1, int *path2, int count) {
    int i;
    for (i = 0; i < count; i++) {
        if (path1[i] != path2[i]) {
            return 0;
        }
    }
    return 1;
}

int countnodesincycle(int cindex) {
    int i = 0;
    while (cycles[cindex][i] != -1) {
        i++;
    }
    return i;
}

int compcycle(int *path, int count, int cindex) {
    int i, c = cindex;
    for (i = 0; i < count; i++) {
        int got = 0, j = 0;
        while (cycles[c][j] != -1) {
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
    int i;
    for (i = 0; i < count; i++) {
        cycles[cyclecount][i] = path[i];
    }
    cycles[cyclecount][i] = -1;
    cyclecount++;
    printpath(path, count);
}

void search(int *path, int count) {
    int cnode = path[count - 1];
    int i;
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
                storecycle(path, count);
            }
        }
        p = p->link;
    }
}

int main(void) {
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

    int path[100];
    path[0] = nodes[0].nodeid; // Start from the first node
    int ii;
    for (ii = 0; ii < nodecount; ii++) {
        path[0] = nodes[ii].nodeid;
        search(path, 1);
    }

    search(path, 1);

    // Free memory allocated for nodes
    int i;
    for (i = 0; i < nodecount; i++) {
        struct node *p = nodes[i].link;
        while (p != NULL) {
            struct node *temp = p;
            p = p->link;
            free(temp);
        }
    }

    return 0;
}
