/* Search a value “X” (take input X from user) in the array and print
    “Found” if X found in the array otherwise print “Not Found” */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int tag = 0;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");
//Insert Value
    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            tag++;
    }

    if(tag==1)
        printf("X Found");
    else
        printf("X Not Found");

    return 0;
}

