/*  Use Dynamic Memory Allocation to create three elements of the Linked List and display
    (only value) the complete Linked List using a function. (Check Empty List) */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_link_list(Node *temp);

int main()
{
    Node *p, *q, *r;
    Node *head = NULL;

    print_link_list(head);

    p = (Node *) malloc(sizeof(Node));
    q = (Node *) malloc(sizeof(Node));
    r = (Node *) malloc(sizeof(Node));

    head = p;

    p->value = 10;
    p->next = q;

    q->value = 20;
    q->next = r;

    r->value = 30;
    r->next = NULL;

    print_link_list(head);

    return 0;
}

void print_link_list(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
