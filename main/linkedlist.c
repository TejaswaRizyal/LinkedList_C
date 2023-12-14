#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>

node* create_node(int data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}