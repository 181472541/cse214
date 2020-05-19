/*Scan values from user into an array until end of file*/

#include<stdio.h>
int main()
{
    int array[100];
    int p = 0;
    while(scanf("%d",&array[p]) != EOF)
    {
        p++;
        if(p+1>100)
        {
            printf("Overflow");
            break;
        }
    }
    return 0;
}
