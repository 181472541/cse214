/* Merge the Elements of two Sorted Array */

#include <stdio.h>
int main()
{
    int i, j, size, tag;
    int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
    int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
    int size1 = 10;
    int size2 = 10;

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

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array1[i]>array1[j])
            {
                tag = array1[i];
                array1[i] = array1[j];
                array1[j] = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",array1[i]);

    printf("\n");

    return 0;
}

