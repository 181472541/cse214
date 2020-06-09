/*  Insert a value “X” (take input X from user) in the array
    at Kth (take input K from user) index and shift all other
    value to right. And print the whole array. Access the array
    using pointer */

#include<stdio.h>
int main()
{
    int *p;
    int i, X, K;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&X);

    scanf("%d",&K);

    p = &array[0];

    for (i=size; i>=K; i--)
        *(p+i) = *(p+i-1);

    size++;

    *(p+K-1) = X;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
