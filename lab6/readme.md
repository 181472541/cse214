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

## [Print Address, Value, and Next Address (Without function and DMA](../lab6/2.c)
```c
// Structure  Declaration
// struct Structure_Name Variable_Name;

    struct node p, q, r;
    struct node *head = NULL;
```

## [Linked List Initialize](../lab6/3.c)
```c
// Variable_Name.Member_Name = Value

  p.value = 10;
```

## [Access Linked List](../lab6/4.c)
```c

```

## [Traverse Linked List](../lab6/5.c)
```c

```

## [Linked List Output](../lab6/6.c)
```c

```
