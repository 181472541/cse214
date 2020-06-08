/* Reverse the given array within the same array */

#include <stdio.h>
int main()
{
    int i, j, tag;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    for(i=size-1, j=0; j<i; i--, j++){
        tag = array[j];
        array[j] = array[i];
        array[i] = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    return 0;
}

