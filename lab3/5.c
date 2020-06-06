/* Calculate the summation of all elements of the given array */

#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int array[100] = {6, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    for(i=0; i<size; i++)
        sum += array[i];

    printf("%d\n",sum);

    return 0;
}
