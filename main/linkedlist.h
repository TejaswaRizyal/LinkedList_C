#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

// creates a new node as a pointer
node* create_node(int);
node* initialize_list(int);
void append(node*, int);
void print_list(node*);


#endif // LINKEDLIST_H