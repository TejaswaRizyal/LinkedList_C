#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

node* createNode(int data);

#endif // LINKEDLIST_H