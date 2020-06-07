/* Copy the given array into another array */

#include<stdio.h>
int main()
{
    int i;
    int tag = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array1[i]);

    printf("\n");

    for(i=0; i<size; i++)
    {
        tag = array1[i];
        array2[i] = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",array2[i]);

    return 0;
}
