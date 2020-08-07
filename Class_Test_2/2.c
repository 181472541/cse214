#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

void menu();
void display_queue(node *temp);
void empty();
void queue_size(node *temp);
void top(node *temp);
node* push(node *temp, int value);
node* pop(node *temp);

int main()
{
    menu();
    return 0;
}

void menu()
{
    node *head = NULL;
    int value, option;
    do
    {
        system("cls");
        printf("1. Empty\n");
        printf("2. Size\n");
        printf("3. Top\n");
        printf("4. Push\n");
        printf("5. Pop\n");
        printf("6. Display\n");
        printf("7. Exit\n");

        printf("Enter your Option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            empty(head);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 2)
        {
            queue_size(head);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 3)
        {
            top(head);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 4)
        {
            printf("Enter Queue Element : ");
            scanf("%d", &value);

            head = push(head,value);
            printf("%d inserted in queue",value);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 5)
        {
            head = pop(head);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 6)
        {
            display_queue(head);

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nInvalid Option, Please Option Between '1 to 7'");

            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
    }
    while(option != 7);
}

void empty(node *temp)
{
    if ((temp == NULL))
        printf("Queue is empty");
    else
        printf("Queue is not empty");
}

void queue_size(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("Queue size is: %d", count);
}

void top(node *temp)
{
    if(temp != NULL)
        printf("Top element : %d ", temp->value);
    else
        printf("Top element is Empty");
}


node* push(node *temp, int value)
{
    node *head = temp, *new_node;
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = value;
        new_head->next = NULL;
        return new_head;
    }
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = value;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

node* pop(node *temp)
{
    if(temp != NULL)
    {
        node *new_head = temp->next;
        printf("Deleted value : %d", temp->value);
        free(temp);
        return new_head;
    }
    printf("Empty Queue");
    return temp;
}

void display_queue(node *temp)
{
    if (temp == NULL)
    {
        printf("Queue is empty");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}
