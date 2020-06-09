/*  Scan N (take input N from user) values from user into an array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int *p;
    int i, N;
    int array[100];

    p = &array[0];

    scanf("%d",&N);

    for(i=0; i<N; i++)
        scanf("%d",(p+i));

    printf("\n");

    for(i=0; i<N; i++)
        printf("%d ",*(p+i));

    return 0;
}
