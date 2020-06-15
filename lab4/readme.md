## [Copy an Array Into Another Array](../lab4/1.c)
```c
for(i=0; i<size; i++)
    {
        tag = array1[i];
        array2[i] = tag;
    }
```

## [Reverse an Array and Store Into Another Array](../lab4/2.c)
```c
for(i=0; i<=size; i++)
    {
        tag = array1[size-i];
        array2[i-1] = tag;
    }
```

## [Reverse an Array and Store Into the Same Array](../lab4/3.c)
```c
int tag = 0; // Where hold the value of array
for(i=size-1, j=0; j<i; i--, j++){
        tag = array[j];
        array[j] = array[i];
        array[i] = tag;
    }
```

## [Array Compare](../lab4/4.c)
```c
for(i=0; i<size; i++)
    {
        if(array1[i]==array2[i]) // Check equality between both array
            same++;
    }

if(same==size)                              // If equal to the size then print same
        printf("\n\nTwo array are same\n");
else                                        // If not equal to the size then print not same
        printf("\n\nTwo array are not same\n");
```

## [Array Merge](../lab4/5.c)
```c
size = size1 + size2; // Summation of two array size

for(i=size1, j=0; i<=size; i++,j++)
        array1[i]=array2[j];
```

## [Merge the Elements of Two Sorted Array](../lab4/6.c)
```c
for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array1[i]>array1[j]) // Sorting the array after merging
            {
                tag = array1[i];
                array1[i] = array1[j];
                array1[j] = tag;
            }
        }
    }
```

## [Split an Array Into Two Different Arrays](../lab4/7.c)
```c
scanf("%d",&K); // Here, K is the position of the element where to split the array
for(i=0; i<size; i++)
    {
        if(i<K)
        {
            array1[i] = array[i]; // Copying array to another array
            size1++; // Count the size of array1
        }
        else
        {
            array2[j++] = array[i]; // Copying array to another array
            size2++; // Count the size of array2
        }
    }
```

## [Cyclically Permute](../lab4/8.c)
```c
array[size] = array[0]; // First value store into to the 11th position

for (i=0; i<size; i++)
        array[i] = array[i+1]; // Shift left the array elements
```
