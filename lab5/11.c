/* Find Second Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *max;
    int i, max_2nd;
    int array[100] = {73, 80, 8, 40, 33, 88, 70, 2, 99, 1};
    int size = 10;

    max = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(max+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max_2nd && *(max+i)<*max)
            max_2nd = *(max+i);
    }

    printf("%d\n", max_2nd);

    return 0;
}

