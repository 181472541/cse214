```c
## Variable Decleration
int N;
int p = 0, memory = 10;
```

```c
## Array Decleration or Initialization
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

```c
## Array Elements Insertion (User Input)
for(p = 0; p<memory; p++)
    {
        scanf("%d ",&array[p]);
    }
```

```c
## Print The Array Elements
for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
```

```c
## Array Reversing
for(p = memory-1; p>=0; p--)
    {
        printf("%d ", array[p]);
    }
```

```c
## Array Access
if (index_value > index_size)
printf("Overflow"); //The index location is not available. 
```

```c
## End of File
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
