## [Implementation of Doubly Linked List](../lab10/1.c)

## Node Structure of Linked List
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
