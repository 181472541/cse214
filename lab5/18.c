/* Merge the Elements of two Sorted Array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int i, j, size, tag;
    int *p, *q;
    int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
    int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
    int size1 = 10;
    int size2 = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    return 0;
}
