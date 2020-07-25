<h1 align="center">
    Design a Double Way Non Circular Linked List
</h1>

#### [CLICK HERE For C File](../lab10/Update.c)

#### [CLICK HERE For Header File](../lab10/update_header_file.h)

## Introduction
Doubly linked list is a type of linked list in which each node apart from storing its data has two links. The first link points to the previous node in the list and the second link points to the next node in the list. The first node of the list has its previous link pointing to NULL similarly the last node of the list has its next node pointing to NULL. The two links help us to traverse the list in both backward and forward direction.<br>
Following are the basic operations supported by a doubly non circular linked list.
* <b>Front/Head:</b> Return the first element of Linked List.
* <b>Back/Tail:</b> Returns the Last element of Linked List
* <b>Empty:</b> Tests to see whether the List is empty or not and display the result.
* <b>Size:</b> Count the List elements & Returns the number of elements in the queue.
* <b>Push Front:</b> Adds an element at the beginning of the list.
* <b>Pop Front:</b> Deletes an element at the beginning of the list.
* <b>Push Back:</b> Adds an element at the end of the list.
* <b>Pop Back:</b> Deletes an element from the end of the list.
* <b>Clear:</b> Delete all element from the linked list
* <b>Display:</b> Display the Linked 

## Uses Of Doubly Non Circular Linked List
As we know double way or doubly linked list can access both front and back elements so it is used in various sector, some of them are listed here:
* Doubly linked list can be used in navigation systems where both front and back navigation is required.
* It is used by browsers to implement backward and forward navigation of visited web pages for example: back and forward button.
* It is also used by various application to implement Undo and Redo functionality.
* It can also be used to represent deck of cards in games.
* It is also used to represent various states of a game.

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
