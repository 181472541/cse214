/* Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
    index and shift all other value to right. And print the whole array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, K;
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");
//Insert Value
    scanf("%d", &X);
//Insert Position
    scanf("%d", &K);

    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
