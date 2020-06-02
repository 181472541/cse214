/* Delete a value from Kth index (take input K from user) from
    the array shift all other value to left. And print the whole array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K;
    int size = 10;
    int tag = 0;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");
//Insert Position
    scanf("%d", &K);

    for (i=K-1; i<size; i++)
        a[i] = a[i+1];

    size--;

    for (i=0; i<size; i++)
        printf("%d ",a[i]);

    return 0;
}
