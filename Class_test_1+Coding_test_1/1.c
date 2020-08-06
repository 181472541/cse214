/* (1) Write a C program that declare an integer array length of one hundred (100)
    (do not initialize the array). Scan values from user into an array until end of file.
    Print entire array each element separated by space. Check Overflow, Use Function, Don’t use Pointer */

#include<stdio.h>
int CheckingOverflow(int tag);
int main()
{
    int i;
    int array[100];
    int p = 0;
    while(scanf("%d",&array[p]) != EOF)
    {
        p++;
        if(CheckingOverflow(p)==0)
        {
            printf("Overflow\n");
            break;
        }
    }

    for(i = 0; i<p; i++)
        printf("%d ", array[i]);

    return 0;
}

int CheckingOverflow(int tag)
{
    if(tag+1>100)
        return 0;
}
