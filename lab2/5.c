/* Update fifth (5th) index with another value. And print the whole array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int K = 5;
    int size = 10;
    int X = 12;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K - 1] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
