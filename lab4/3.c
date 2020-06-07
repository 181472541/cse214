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
    j = 0;
    i = size - 1;
    while(j<i)
    {
        tag = array[j];
        array[j] = array[i];
        array[i] = tag;

        j++;
        i--;
    }

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    return 0;
}
