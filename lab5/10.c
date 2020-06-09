/* Find Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i;
    int *min;
    int array[100] = {73, 80, 2, 40, 33, 7, 70, 92, 99, 85};
    int size = 10;

    min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

    printf("%d\n",*min);

    return 0;
}
