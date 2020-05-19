/*Scan N (take input N from user) values from user into an array*/

#include<stdio.h>
int main()
{
    int N, p;
    int array[100];
    scanf("%d",&N);
    if(N>100)
    {
        printf("Overflow");
    }
    else
    {
        for(p = 0; p<N; p++)
        {
            scanf("%d",&array[p]);
        }
    }
    return 0;
}
