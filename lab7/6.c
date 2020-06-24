/*  Define a “Search” function to find a ‘key’ (take input ‘key’ from user).Print “Found”
    if the search ‘key’ is found in the Linked List otherwise print “Not Found” */


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);

int main()
{
    int key;
    Node *head = NULL;

    scanf("%d",&key);

    head = create_list();
    print_list(head);

    if(search(head,key)==0)
        printf("%d: Not Found",key);
    else
        printf("%d: Found",key);

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

int search(Node *temp, int key)
{
    if(temp)
    {
        while(temp)
        {
            if(key == temp->value)
            {
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
    return 0;
}
