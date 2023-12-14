#include "linkedlist.h"
#include <stdio.h>

int main()
{
    node* linkedlist = initialize_list(20);
    node* ll2 = initialize_list(70);

    append(linkedlist, 30);
    append(linkedlist, 40);
    append(linkedlist, 50);

    append(ll2, 100);

    print_list(linkedlist);
    print_list(ll2);
}