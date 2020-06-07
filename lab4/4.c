/* Declare another array with ten (10) values and
   compare both arrays whether they are same or not */

#include <stdio.h>
int main()
{
    int i;
    int same = 0;
    int notSame = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {1, 22, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array1[i]);

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",array2[i]);

    for(i=0; i<size; i++)
    {
        if(array1[i]==array2[i])
            same++;
        else
            notSame++;
    }

    if(same==size)
        printf("\n\n>>> Two array are same <<<\n");
    else if(notSame==size)
        printf("\n\n>>> Two array are not same <<<\n");
    else
        printf("\n\n>>> Two array are not same <<<\n");

    return 0;
}
