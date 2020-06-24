/*  Define a function to display the complete Linked List with a recursive
    function using problem 4. */

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

    else
    {
        printf("%d ",temp->value);
        if(temp->next==NULL)
        {
            return;
        }
        print_link_list(temp->next);
    }
    printf("\n");
}
