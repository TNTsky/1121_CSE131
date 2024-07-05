#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int v; //value
    node* next;
}node;

typedef struct
{
    node* L;
}steak;

node* newnode()
{
    node *n = (node*)malloc(sizeof(node));
    n->v = 0;
    n->next = 0;

    return n;
}

node* newnode(int v)
{
    node *n = (node*)malloc(sizeof(node));
    n->v = v;
    n->next = 0;

    return n;
}

int main()
{
    node *p = newnode(2);

    printf("%d\n",p->v);

    return 0;
}