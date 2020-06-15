## [Take Array Elements from User](../lab1/1.c)
```c
scanf("%d",&N);
if(N>100)
        printf("Overflow");
else  
    {
        for(p = 0; p<N; p++)
        {
            scanf("%d",&array[p]);
        }
    }
```

## [Take Array Elements from User Until EOF](../lab1/2.c)
```c
    while(scanf("%d",&array[p]) != EOF)
    {
        p++;
        if(p+1>100)
        {
            printf("Overflow");
            break;
        }
    }
```

## [Take Array Elements from User Until Input is ZERO](../lab1/3.c)
```c
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
```
## [Print each Element in Newline](../lab1/4.c)
```c
for(p = 0; p<memory; p++)
        printf("%d\n", array[p]);
```

## [Print each Element Separated by Space](../lab1/5.c)
```c
for(p = 0; p<memory; p++)
        printf("%d ", array[p]);
```

## [Print each Element Separated by Comma](../lab1/6.c)
```c
for(p = 0; p<memory; p++)
    {
        printf("%d", array[p]);
        if(p<=memory-2)
        {
            printf(", ");
        }
    }
```

## [Print Array Elements in Reverse and Separated by Space](../lab1/7.c)
```c
    for(p = memory-1; p>=0; p--)
        printf("%d ", array[p]);
```
