/* Design a Double way non circular linked list */

#include<stdio.h>
#include<stdlib.h>
#include "Update.h"

// Main Function
int main()
{
    int option;
    node *head = NULL;
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
    return 0;
}
