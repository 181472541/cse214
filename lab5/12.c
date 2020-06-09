/* Find Second Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *min;
    int i, min_2nd;
    int array[100] = {73, 80, 8, 40, 33, 1, 70, 2, 99, 10};
    int size = 10;

    min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min_2nd && *(min+i)!=*min)
            min_2nd = *(min+i);
    }

    printf("%d\n", min_2nd);

    return 0;
}


