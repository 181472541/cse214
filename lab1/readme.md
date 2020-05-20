## Variable Decleration
```c
int N;
int p = 0, memory = 10;
```

## Array Decleration or Initialization
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Array Elements Insertion (User Input)](../lab1/1.c)
```c
for(p = 0; p<memory; p++)
    {
        scanf("%d ",&array[p]);
    }
```

## [Print The Array Elements](../lab1/5.c)
```c
for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
```

## [Array Reversing](../lab1/7.c)
```c
for(p = memory-1; p>=0; p--)
    {
        printf("%d ", array[p]);
    }
```

## [Array Access](../lab1/3.c)
```c
if (index_value > index_size)
printf("Overflow"); //The index location is not available. 
```

## [End of File](../lab1/2.c)
```c
while(scanf("%d",&array[p]) != EOF)
    {
        p++;
    }
    // or
while(scanf("%d",&array[p]) == 1)
    {
        p++;
    }
```
