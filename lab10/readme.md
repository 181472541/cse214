<h1 align="center">
    Design a Double Way Non Circular Linked List
</h1>

#### [CLICK HERE For C File](../lab10/update.c)

#### [CLICK HERE For Header File](../lab10/update_header_file.h)

<h2 align="center">
    Implementation of Doubly Linked List
</h2>

## Structure of Linked List
```c
typedef struct Node node;
struct Node
{
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
```

## Function Prototype
```c
// For Main Function
void display();
node* push(node *head);
node* pop(node *head);
node* other_operations(node *head);

// For Header File
void display_list(node *temp);
void push_front();
void push_back();
void pop_front();
void pop_back();
void clear();
int front(node *temp);
int back(node *temp);
void empty(node *temp);
void size(node *temp);
```

## Pointers and Variables
```c
int item;
int count = 0;
node *new_node, *temp, *list_delete;
```

## Check List is Empty Or Not:
```c
node *new_node = head;
if(new_node==NULL)
    {
        printf(">>> Empty <<<");
    }
```

## Display Doubly Link List
```c
node *new_node = head;
while(new_node != NULL)
    {
        printf("%d ",new_node->data);
        new_node=new_node->next;
    }
```

## Display Head
```c
if(temp!=NULL)
    {
        return temp->data;
    }
```

## Display Tail
```c
if(temp!=NULL)
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        return temp->data;
    }
```

## Linked List Size
```c
int count = 0;
while(temp)
    {
        count++;
        temp = temp->next;
    }
printf("List Size: %d\n", count);
```

## PUSH Front
```c
node *new_node;
int item;
new_node = (node *) malloc(sizeof(node));
if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
else
    {
        printf("Input Value to Push Front: ");
        scanf("%d",&item);
        if(head==NULL)
        {
            new_node->next = NULL;
            new_node->prev=NULL;
            new_node->data=item;
            head=new_node;
        }
        else
        {
            new_node->data=item;
            new_node->prev=NULL;
            new_node->next = head;
            head->prev=new_node;
            head=new_node;
        }
printf("\t\t\t>>> Front Node Inserted <<<\n");
}
```


## PUSH Back
```c
node *new_node,*temp;
int item;
new_node = (node *) malloc(sizeof(node));
if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
else
    {
        printf("Input Value to Push Back: ");
        scanf("%d",&item);
        new_node->data=item;
        if(head == NULL)
        {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node ->prev=temp;
            new_node->next = NULL;
        }
    }
printf("\t\t\t>>> Back Node Inserted <<<");
```

## POP Front
```c
node *new_node;
if(head == NULL)
    {
        printf("UNDERFLOW");
    }
else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\t\t\t>>> Front Node Deleted <<<");
    }
else
    {
        new_node = head;
        head = head -> next;
        head -> prev = NULL;
        free(new_node);
        printf("\t\t\t>>> Front Node Deleted <<<");
    }
```

## POP Back
```c
node *new_node=head, *prev;
if(head == NULL)
    {
        printf("UNDERFLOW");
    }
else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\t\t\t>>> Back Node Deleted <<<");
    }
else
    {
        while(new_node->next!=NULL)
        {
            prev=new_node;
            new_node=new_node->next;
        }
        prev->next=NULL;
        free(new_node);
        printf("\t\t\t>>> Back Node Deleted <<<");
    }
```

## Delete all Node from Linked List
```c
node *list_delete;
node *temp = head;
while(temp)
    {
        list_delete = temp;
        temp = temp->next;
        free(list_delete);
    }
return NULL;
```
