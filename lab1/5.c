/*Print entire array each element separated by space*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int memory = 10, p;
    for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
    return 0;
}
