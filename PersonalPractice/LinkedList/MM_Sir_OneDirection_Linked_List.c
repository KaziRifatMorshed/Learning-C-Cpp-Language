//creating a single linked list using a loop

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nodeid;
    struct node * next;
};


void printnodes (struct node * p)
{
    while (p != NULL)
    {
        printf (" %d ",p->nodeid);
        p = p->next;
    }
}


int main() {
    // Write C code here
    //printf("Hello world");


    struct node * n1, * n2, * n3, *n, *start, *current;

    int * p;

    n1 = (struct node *) malloc (sizeof (struct node));
    n2 = (struct node *) malloc (sizeof (struct node));
    n3 = (struct node *) malloc (sizeof (struct node));

    n1->nodeid = 10; n2->nodeid = 20; n3->nodeid = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    n = n1;

    while (n != NULL)
    {
        printf (" %d ", n->nodeid);
        n = n->next;
    }

    int counter = 1;
    while (1)
    {
        n = (struct node *) malloc (sizeof (struct node));
        n->nodeid = counter;
        n->next = NULL;

        if (counter == 1)
        {
            start = n;
            current = n;
        }
        else
        {
            current->next = n;
            current = n;
        }

        if (counter == 30) {break;}
        counter++;
    }

    printnodes (start);

    return 0;
}