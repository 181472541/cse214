/* Find Second Minimum from the Array */

#include<stdio.h>
int main()
{
    int i, min, min_2nd;
    int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    min = min_2nd = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]<min)
        {
            min_2nd = min;
            min = array[i];
        }
        else if(array[i]<min_2nd && array[i]!=min)
            min_2nd = array[i];
    }

    printf("%d\n",min_2nd);

    return 0;
}
