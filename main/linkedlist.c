#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>

node* create_node(int data)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node* initialize_list(int data)
{
    return create_node(data);
}

void append(node* head, int data)
{
    node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = create_node(data);
}

void print_list(node* head)
{
    node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}