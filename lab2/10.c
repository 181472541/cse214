/*  Delete a value “X” (take input X from user) from
    the array shift all other value to left. If “X”
    is not present in the given array print Element
    Not Found. Only delete the first occurrence of
    the value. And print the whole array */

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, X;
    int tag=0;
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

//Insert Value
    scanf("%d",&X);

    for(j=0; j<size; j++)
    {
        if(X==array[j])
        {
            for(i=X-1; i<=size; i++)
            {
                array[i] = array[i+1];
            }
            tag++;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
}
