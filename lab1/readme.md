## [Variable Decleration](../lab1/6.c)
```c
int N;
int p = 0, memory = 10;
```

## [Array Decleration or Initialization](../lab1/4.c)
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Array Elements Insertion (User Input)](../lab1/1.c)
```c
/*for ( initialize ; condition; increment ) {
   scanf statement(s);
}*/

//Implement in Program

for(p = 0; p<memory; p++)
    {
        scanf("%d ",&array[p]);
    }
```

## [Print The Array Elements](../lab1/5.c)
```c
/*for ( initialize ; condition; increment ) {
   printf statement(s);
}*/

//Implement in Program

for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
```

## [Array Reversing](../lab1/7.c)
```c
/*for ( initialize ; condition; Decrement ) {
   printf statement(s);
}*/

//Implement in Program

for(p = memory-1; p>=0; p--)
    {
        printf("%d ", array[p]);
    }
```

## [Array Access](../lab1/3.c)
```c
/*if (index_value > index_size)
printf("Overflow"); //The index location is not available.*/

//Implement in Program

if(p>100)
        {
            printf("Overflow");
            break;
        }
```

## [End of File](../lab1/2.c)
```c
/*while(Conditions){
Statements;
}*/

//Implement in Program

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
