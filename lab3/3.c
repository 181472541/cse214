/* Find Second Maximum from the Array */

#include<stdio.h>
int main()
{
    int i, max, max_2nd;
    int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    max = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max_2nd = max;
            max = array[i];
        }
        else if(array[i]>max_2nd && array[i]<max)
            max_2nd = array[i];
    }

    printf("%d\n",max_2nd);

    return 0;
}
