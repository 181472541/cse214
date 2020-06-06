/* Find Minimum from the Array */

#include<stdio.h>
int main()
{
    int i, min;
    int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    min = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]<min)
            min = array[i];
    }

    printf("%d\n",min);

    return 0;
}
