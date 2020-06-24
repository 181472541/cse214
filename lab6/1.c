/*  Define a Structure for Linked List Node, Declare three variable,
    Assign value and next address in those variable. Print the variable address,
    value and next variable address. (Don’t use any Function, ‘typedef’ keyword
    and Dynamic Memory Allocation (DMA)) */

#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node p, q, r;
    struct node *head = NULL;

    head = &p;

    p.value = 10;
    p.next = &q;
    printf("%p \t %d \t %p\n", &p, p.value, p.next);

    q.value = 20;
    q.next = &r;
    printf("%p \t %d \t %p\n", &q, q.value, q.next);

    r.value = 30;
    r.next = NULL;
    printf("%p \t %d \t %p\n", &r, r.value, r.next);

    return 0;
}
