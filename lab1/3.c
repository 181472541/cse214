/*Scan values from user into an array until user input is O (Zero)*/

#include<stdio.h>
int main()
{
    int array[100];
    int p = 0;
    while(scanf("%d",&array[p]) != EOF)
    {
        if(0 == array[p])
        {
            break;
        }
        if(p>100)
        {
            printf("Overflow");
            break;
        }
        else
        {
            p++;
        }
    }
    return 0;
}
