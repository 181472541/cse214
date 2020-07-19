/* Design a Double way non circular linked list */

#include<stdio.h>
#include<stdlib.h>
#include "DoublyNonCircular.h"

// Function Prototype
void display();
node* push(node *head);
node* pop(node *head);
node* other_operations(node *head);

// Main Function
int main()
{
    int op;
    do
    {
        system("cls");
        printf("Select Your Choice: \n");
        printf("1. DISPLAY\n");
        printf("2. PUSH\n");
        printf("3. POP\n");
        printf("4. OTHER OPERATIONS\n") ;
        printf("5. Close\n");
        printf("\nEnter Choice: ");
        scanf("%d", &op);
        if(op<=0 || op>5)
        {
            printf("\t\t\t!!! Invalid Choice !!!\nPlease Insert Between 1 to 5\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(op == 1)
        {
            display();
        }
        else if(op == 2)
        {
            push(head);
        }
        else if(op == 3)
        {
            pop(head);
        }
        else if(op == 4)
        {
            other_operations(head);
        }
    }
    while(op!=5);
}

// Display Function
void display()
{
    display_list(head);
    getchar();
    printf("\n\nPress Enter to Continue");
    getchar();
};

// PUSH Function
node* push(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Choice: \n");
        printf("1. Push Front\n");
        printf("2. Push Back\n");
        printf("3. Back to Main Menu\n");
        printf("\nEnter Choice: ");
        scanf("%d", &op);
        if(op<=0 || op>3)
        {
            printf("\t\t\t!!! Invalid Choice !!!\nPlease Insert Between 1 to 3\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(op<3)
        {
            if(op==1)
            {
                push_front();
            }
            else if(op==2)
            {
                push_back();
            }
        }
    }
    while(op!=3);
    return head;
};

// POP Function
node* pop(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Choice: \n");
        printf("1. Pop Front\n");
        printf("2. Pop Back\n");
        printf("3. Clear\n");
        printf("4. Back to Main Menu\n");
        printf("\nEnter Choice: ");
        scanf("%d", &op);
        if(op<=0 || op>4)
        {
            printf("\t\t\t!!! Invalid Choice !!!\nPlease Insert Between 1 to 4\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(op<4)
        {
            if(op==1)
            {
                pop_front();
            }
            else if(op==2)
            {
                pop_back();
            }
            else if(op==3)
            {
                clear(head);
                printf("\t\t>>> Delete All Node From List <<<");
                getchar();
                printf("\n\nPress Enter to Continue");
                getchar();
            }
        }
    }
    while(op!=4);
    return head;
};

// Others Function
node* other_operations(node *head)
{
    int op;
    do
    {
        system("cls");
        printf("Select Your Choice: \n");
        printf("1. Head\n");
        printf("2. Tail\n");
        printf("3. Empty\n");
        printf("4. Size\n") ;
        printf("5. Front\n") ;
        printf("6. Back\n") ;
        printf("7. Back to Main Menu\n");
        printf("\nEnter Choice: ");
        scanf("%d", &op);
        if(op<=0 || op>7)
        {
            printf("\t\t\t!!! Invalid Choice !!!\nPlease Insert Between 1 to 7\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(op<7)
        {
            if(op==1)
            {
                printf("List Head: %d\n", front(head));
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
            else if(op==2)
            {
                printf("List Tail: %d\n", back(head));
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
            else if(op==3)
            {
                empty(head);
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
            else if(op==4)
            {
                size(head);
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
            else if(op==5)
            {
                printf("List Front: %d\n",front(head));
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
            else if(op==6)
            {
                printf("List Back: %d\n", back(head));
                getchar();
                printf("\nPress Enter to Continue");
                getchar();
            }
        }
    }
    while(op!=7);
    return head;
};
