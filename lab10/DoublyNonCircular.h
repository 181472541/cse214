#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
    node *prev;
};

node* create_list();
void display_list(node *temp);
void push_front(node *temp, int key);
void push_back(node *temp, int key);
void pop_front(node *temp);
void pop_back(node *temp);
void clear(node *temp);
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


void push_front(node *temp, int key)
{
    node * new_head = (node*)malloc(sizeof(node));
    new_head-> value = key;
    new_head->next = temp;
    new_head->prev = NULL;
    if (temp != NULL)
        temp->prev = new_head;
    temp = new_head;
}

void push_back(node *temp, int key)
{
node* new_node = (node*)malloc(sizeof(node));

node* last = temp;
    new_node->value = key;
    new_node->next = NULL;
    if ( temp == NULL) {
        new_node->prev = NULL;
        temp = new_node;
       return;
   }
    while (last->next != NULL)
     last = last->next;
    last->next = new_node;
    new_node->prev = last;
return;
}

void pop_front(node *temp)
{
    node *new_head;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        new_head = head;
        head = head -> next;
        head -> prev = NULL;
        free(new_head);
        printf("\nnode deleted\n");
    }
}

void pop_back(node *temp)
{
    node *new_head;
    if(head == NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        new_head = head;
        if(new_head->next != NULL)
        {
            new_head = new_head -> next;
        }
        new_head -> prev -> next = NULL;
        free(new_head);
        printf("\nNode Deleted\n");
    }
}

void clear(node temp, node del)
{if ( temp == NULL || del == NULL)
return;
    if (temp == del)
       temp = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
    return;}

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

