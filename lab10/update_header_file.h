/* Design a Double way non circular linked list */

#include<stdio.h>
#include<stdlib.h>

// Structure Declare
typedef struct Node node;
struct Node
{
    int data;
    node *next;
    node *prev;
};
node *head = NULL;

// Function Prototype
void main_menu();
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

// Main Menu
void main_menu()
{
    int option;
    do
    {
        system("cls");
        printf("Select Your Choice: \n");
        printf(" 1. Display\n");
        printf(" 2. Empty\n");
        printf(" 3. Size\n");
        printf(" 4. Front\n");
        printf(" 5. Back\n");
        printf(" 6. Push Front\n");
        printf(" 7. Push Back\n");
        printf(" 8. Pop Front\n");
        printf(" 9. Pop Back\n");
        printf("10. Clear\n");
        printf("11. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d", &option);
        if(option<=0 || option>11)
        {
            printf("\t\t\t!!! Invalid Choice !!!\nPlease Insert Between 1 to 11\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(option == 1)
        {
            display_list(head);
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
        else if(option == 2)
        {
            empty(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 3)
        {
            size(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 4)
        {
            if(front(head)!=NULL)
                printf("List Front: %d\n",front(head));
            else
                printf("List Front: Empty");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 5)
        {
            if(back(head)!=NULL)
                printf("List Front: %d\n",back(head));
            else
                printf("List Front: Empty");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 6)
        {
            push_front();
        }
        else if(option == 7)
        {
            push_back();
        }
        else if(option == 8)
        {
            pop_front();
        }
        else if(option == 9)
        {
            pop_back();
        }
        else if(option == 10)
        {
            clear();
            printf("\t\t>>> Delete All Node From List <<<");
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
    }
    while(option!=11);
}


// Display Doubly Linked List
void display_list(node *temp)
{
    node *new_node;
    printf("Doubly Linked List: ");
    new_node = head;
    if(new_node==NULL)
    {
        printf(">>> Empty <<<");
    }
    while(new_node != NULL)
    {
        printf("%d ",new_node->data);
        new_node=new_node->next;
    }
}

// Insert Front
void push_front()
{
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
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}

// Insert Back
void push_back()
{
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
    getchar();
    printf("\nPress Enter to Continue");
    getchar();
}

// Delete Front
void pop_front()
{
    node *new_node;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\t\t\t>>> Front Node Deleted <<<");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        new_node = head;
        head = head -> next;
        head -> prev = NULL;
        free(new_node);
        printf("\t\t\t>>> Front Node Deleted <<<");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}

// Delete Back
void pop_back()
{
    node *new_node=head, *prev;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\t\t\t>>> Back Node Deleted <<<");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
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
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
}

// Delete all Node From Doubly Linked List
void clear()
{
    node *list_delete;
    node *temp = head;
    while(temp)
    {
        list_delete = temp;
        temp = temp->next;
        free(list_delete);
    }
}

// Print Front or Head
int front(node *temp)
{
    if(temp!=NULL)
    {
        return temp->data;
    }
}

//Print Back or Tail
int back(node *temp)
{
    if(temp!=NULL)
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        return temp->data;
    }
}

// Check Doubly Linked List is Empty or Not Empty
void empty(node *temp)
{
    if(temp==NULL)
        printf("\t\t>>> List are Empty <<<");
    else
        printf("\t\t>>> List are Not Empty <<<");
}

// Print Doubly Linked List Size
void size(node *temp)
{
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    printf("List Size: %d\n", count);
}
