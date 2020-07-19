
<div class="text-purple">
  <h2 align="center">
    Design a Double Way Non Circular Linked List
    </h2>
</div>

### [CLICK HERE For C File](../lab10/1.c)

### [CLICK HERE For Header File](../lab10/DoublyNonCircular.h)

<h2 align="center">
    Implementation of Doubly Linked List
</h2>

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
