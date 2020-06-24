## Create Linked List
```c
// Create Node Structure
/* struct Structure_Name {
    dataType Variable_Name;
}; */

struct node
{
    int value;
    struct node *next;
};
```

## Declare Linked List
```c
// Structure  Declaration
// struct Structure_Name Variable_Name;

    struct node p, q, r;
    struct node *head = NULL;
```

## Linked List Initialize
```c
// Variable_Name.Member_Name = Value

  p.value = 10;
```

## Access Linked List
```c
// First Node_variable put into a pointer for accessing
  head = &p;
```

## Traverse Linked List
```c
// any_Variable = next_ Variable_address
  p.next = &q;
  ... ... ...
```

## [Print Address, Value, and Next Address (Without function, typedef and DMA)](../lab6/1.c)
```c
    p.value = 10; // Value Assign
    p.next = &q; // Find Next Address
    printf("%p \t %d \t %p\n", &p, p.value, p.next); // Print Node
```

## [Print Address, Value, and Next Address (Without function and DMA)](../lab6/2.c)
```c
    typedef struct node
    {
        int value;
        struct node *next;
    } Node;
    
// print Link List
    p.value = 10; // Value Assign
    p.next = &q; // Find Next Address
    printf("%p \t %d \t %p\n", &p, p.value, p.next); // Print Node
```

## [Display the Complete Linked List using Function (Without DMA)](../lab6/3.c)
```c
void print_link_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
}
```

## [Display the Complete Linked List using DMA and Check Empty List](../lab6/4.c)
```c
    print_link_list(head);

    p = (Node *) malloc(sizeof(Node));
    q = (Node *) malloc(sizeof(Node));
    r = (Node *) malloc(sizeof(Node));
    
    void print_link_list(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
```

## [Display the Complete Linked List using Recursive Function](../lab6/5.c)
```c
        printf("%d ",temp->value);
        if(temp->next==NULL)
        {
            return;
        }
        print_link_list(temp->next); 
```

## [Display the Complete Linked List in Reverse Order](../lab6/6.c)
```c
void reverse_list(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        if(temp==NULL)
        {
            return;
        }
        reverse_list(temp->next);
        printf("%d ",temp->value);
    }
}
```
