#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void display_list(node *temp);
node* push_front(node *temp, int key);
node* push_back(node *temp, int key);
node* pop_front(node *temp);
node* pop_back(node *temp);
node* clear(node *temp);
int front(node *temp);
int back(node *temp);
void empty(node *temp);
void size(node *temp);

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 4;
    d->next = NULL;

    return a;
}

void display_list(node *temp)
{
    if(temp==NULL)
    {
        printf("List Empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}


node* push_front(node *temp, int key)
{
    node *new_head;
    new_head = (node*) malloc(sizeof(node));
    new_head->value = key;
    new_head->next = temp;
    return new_head;
}

node* push_back(node *temp, int key)
{
    if (temp==NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof(node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    node *head = temp, *new_node;
    while(temp->next)
    {
        temp = temp->next;
    }
    new_node = (node*) malloc(sizeof(node));
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

node* pop_front(node *temp)
{
    if(temp)
    {
        node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}

node* pop_back(node *temp)
{
    node *head = temp, *last;
    if(temp)
    {
        if (head->next!=NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return head;
}

node* clear(node *temp)
{
    node *to_delete;
    while(temp)
    {
        to_delete = temp;
        temp = temp->next;
        free(to_delete);
    }
    return NULL;
}

int front(node *temp)
{
    if(temp!=NULL)
    {
        return temp->value;
    }
}

int back(node *temp)
{
    if(temp!=NULL)
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        return temp->value;
    }
}

void empty(node *temp)
{
    if(temp==NULL)
        printf("Empty\n");
    else
        printf("Not Empty\n");
}

void size(node *temp)
{
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    printf("Size: %d\n", count);
}

