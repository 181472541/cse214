/*  Define a function to reverse the Linked List using a recursive function.
    Display both List before and after reversing. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
void print_list_reverse(Node *temp);

int main()
{
    Node *head = NULL;

    head = create_list();
    print_list(head);

    print_list_reverse(head);
    printf("\n");
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

void print_list_reverse(Node *temp){
    if(temp==NULL){
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->value);
}
