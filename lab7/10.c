/*  Copy a Linked List into another Linked List with a recursive function.
    Display both List before and after copy. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* copy_list_recursive(Node *list);

int main()
{
    Node *head = NULL;
    Node *list = NULL;

    head = create_list();
    print_list(head);

    list = copy_list_recursive(head);
    print_list(list);
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


Node* copy_list_recursive(Node *copy)
{
    if(copy == NULL)
        return NULL;
    Node *temp = (Node*) malloc(sizeof (Node));
    temp->value = copy->value;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;
}
