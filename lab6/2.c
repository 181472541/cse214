/*  Define a function to print single node (Address, Value, and Next Address)
    of the Linked List and do the same as problem 1. (Use ‘typedef’ keyword,
    Don’t use DMA) */

#include<stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_single_node(Node *temp);

int main()
{
    Node p, q, r;
    Node *head = NULL;

    head = &p;

    p.value = 10;
    p.next = &q;
    print_single_node(&p);

    q.value = 20;
    q.next = &r;
    print_single_node(&q);

    r.value = 30;
    r.next = NULL;
    print_single_node(&r);

    return 0;
}

void print_single_node(Node *temp)
{
    printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
}
