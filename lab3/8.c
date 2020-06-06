/* Calculate first 92 Fibonacci number and store those in an array */

#include<stdio.h>
int main()
{
    int i;
    double array[100];
    int size = 92;

    array[0] = 0;
    array[1] = 1;

    for(i=2; i<size; i++)
        array[i] = array[i-1] + array[i-2];

    for (i = 0; i<size; i++)
        printf("%d. %.0lf \n", i+1, array[i]);

    return 0;
}
