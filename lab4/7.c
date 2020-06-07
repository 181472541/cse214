/* Split an Array at Kth (take input K from user) index into two different Arrays */

#include <stdio.h>
int main()
{
    int i, j=0, K;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array1[100];
    int array2[100];
    int size = 10;
    int size1 = 0;
    int size2 = 0;


    scanf("%d",&K);

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    for(i=0; i<size; i++)
    {
        if(i<K)
        {
            array1[i] = array[i];
            size1++;
        }
        else
        {
            array2[j++] = array[i];
            size2++;
        }
    }

    printf("\n");
    for(i=0; i<size1; i++)
        printf("%d ",array1[i]);

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",array2[i]);

    return 0;
}


