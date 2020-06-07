/* Reverse the given array and store it in another array */

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

    for(i=0; i<=size; i++)
    {
        tag = array1[size-i];
        array2[i-1] = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",array2[i]);

    return 0;
}

