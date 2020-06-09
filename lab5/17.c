/*  Declare another array with five (5) values and merge two array
    into one array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int i, j, size;
    int *p, *q;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {11, 12, 13, 14, 15};
    int size1 = 10;
    int size2 = 5;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}
