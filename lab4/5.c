/* Declare another array with five (5) values and
    merge two array into one array */

#include <stdio.h>
int main()
{
    int i, j, size;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {11, 12, 13, 14, 15};
    int size1 = 10;
    int size2 = 5;

    for(i=0; i<size1; i++)
        printf("%d ",array1[i]);

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",array2[i]);

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        array1[i]=array2[j];

    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",array1[i]);

    return 0;
}
