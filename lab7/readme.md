## [Create Linked List](../lab7/1.c)
```c
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
```

## [Check Empty Linked List](../lab7/2.c)
```c
void empty_list(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
}
```

## [Find Linked List Size](../lab7/3.c)
```c
int size(Node *temp)
{
    int count = 0;
    while(temp)  //temp!=NULL
    {
        count++;
        temp = temp->next;
    }
    return count;
}
```

## [Print Front Linked List](../lab7/4.c)
```c
int front(Node *temp){
    if(temp!=NULL){
        return temp->value;
    }
}
```

## [Print Back Linked List](../lab7/5.c)
```c
int back(Node *temp){
    if(temp!=NULL){
        while(temp->next){
            temp=temp->next;
        }
        return temp->value;
    }
}
```

## [Search Key in Linked List](../lab7/6.c)
```c
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
```

## [Print Reverse Linked List (Without Recursion)](../lab7/7.c)
```c
Node* print_reverse(Node *list)
{
    Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}
```

## [Print Reverse Linked List Using Recursion](../lab7/8.c)
```c
void print_list_reverse(Node *temp){
    if(temp==NULL){
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->value);
}
```

## [Copy Linked List to Another Linked List (Without Recursion)](../lab7/9.c)
```c
Node* copy_list(Node *temp)
{
    Node *head2;
    Node *temp2;

    temp2 = (Node*) malloc(sizeof (Node));

    temp2->value = temp->value;
    temp2->next = temp->next;

    head2 = temp2;
    temp = temp->next;
    while(temp)
    {
        temp2 = (Node*) malloc(sizeof (Node) ) ;
        temp2->value = temp->value;
        temp2->next = temp->next;
        temp = temp->next;
    }
    return head2;
}
```

## [Copy Linked List to Another Linked List Using Recursion](../lab7/10.c)
```c
Node* copy_list_recursive(Node *copy)
{
    if(copy == NULL)
        return NULL;
    Node *temp = (Node*) malloc(sizeof (Node));
    temp->value = copy->value;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;
}
```

## [Merge two Linked List](../lab7/11.c)
```c
Node* merge_list(Node *list1, Node *list2)
{
    Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
```

## [Sort and Merge two Linked List](../lab7/12.c)
```c
// two linked list are already sorted

    list1 = create_list1();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    list = merge_list(list1, list2);
    print_list(list);
```
