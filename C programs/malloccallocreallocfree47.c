#include <stdio.h>
#include <stdlib.h>

// USE OF MALLOC.

// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of array you want to create\n");
//     scanf("%d", &n);

//     // Dynamic memory alllocation using mallloc.
//     ptr = (int *)malloc(n * sizeof(int));

//     // Input values into the array.
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value number %d of an array\n", i);
//         scanf("%d", &ptr[i]);
//         // printf("The value at position %d of an array is %d\n",i ,ptr[i]);   //this line is write here is also correct but in output they will not see beautyful so for no confusion this line of code write in seprate for loop.
//     }

//     // Output values from the array.
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at position %d of an array is %d\n", i, ptr[i]);
//     }

//     // free(ptr);  //It is used for free the allocated memory.

//     return 0;
// }


// OUTPUT OF MALLOC

// Enter the size of array you want to create
// 5
// Enter the value number 0 of an array
// 45
// Enter the value number 1 of an array
// 33
// Enter the value number 2 of an array
// 10
// Enter the value number 3 of an array
// 7
// Enter the value number 4 of an array
// 18
// The value at position 0 of an array is 45
// The value at position 1 of an array is 33
// The value at position 2 of an array is 10
// The value at position 3 of an array is 7
// The value at position 4 of an array is 18





// USE OF CALLOC.

// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of array you want\n");
//     scanf("%d", &n);

//     // Dynamic memory allocation using calloc.
//     ptr = (int *)calloc(n, sizeof(int));

//     // Input values into the array.
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value number %d of an array\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     // Output values from the array.
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at position %d of an array is %d \n", i, ptr[i]);
//     }

//     // free(ptr);        //It is used for free the allocated memory.

//     return 0;
// }


// OUTPUT OF CALLOC.

// Enter the size of array you want
// 5
// Enter the value number 0 of an array
// 6
// Enter the value number 1 of an array
// 9
// Enter the value number 2 of an array
// 4
// Enter the value number 3 of an array
// 7
// Enter the value number 4 of an array
// 3
// The value at position 0 of an array is 6
// The value at position 1 of an array is 9
// The value at position 2 of an array is 4
// The value at position 3 of an array is 7
// The value at position 4 of an array is 3





// REALLOC IS USED IN BOTH MALLOC AND CALLOC FUNCTION.
// USE OF REALLOC.

int main()
{
    int *ptr;
    int n;

    printf("Enter the size of array you want\n");
    scanf("%d", &n);

    // Dynamic memory allocation using calloc.
    ptr = (int *)calloc(n, sizeof(int));

    // Input values into the array.
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value number %d of an array\n", i);
        scanf("%d", &ptr[i]);
    }

    //Output values from the array.
    for (int i = 0; i < n; i++)
    {
        printf("The value at position %d of an array is %d \n", i, ptr[i]);
    }


//REALLOC KA USE ISLIYE HOTA HAI KI AGAR HAMKO SIZE OF ARRAY BADHANA HO TO HUM REALLOC KA USE KARKE MEMORY KO FIRSE REALLOC KAR SAKTE HAI.
    //USE OF REALLOC.
    printf("Enter the new size of an array you want\n");
    scanf("%d", &n);

    //Dynamic allocation using realloc.
    ptr = (int *)realloc(ptr, n * sizeof(int));

    //Input values of an array.
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value number %d of an array\n", i);
        scanf("%d", &ptr[i]);
    }

    //Output values from the array.
    for (int i = 0; i < n; i++)
    {
        printf("The new values at position %d of an array is %d \n", i, ptr[i]);
    }

    // free(ptr);        //It is used for free the allocated memory.

    return 0;
}


//OUTPUT OF REALLOC.

// Enter the size of array you want
// 4
// Enter the value number 0 of an array
// 1
// Enter the value number 1 of an array
// 2
// Enter the value number 2 of an array
// 3
// Enter the value number 3 of an array
// 4
// The value at position 0 of an array is 1 
// The value at position 1 of an array is 2 
// The value at position 2 of an array is 3 
// The value at position 3 of an array is 4 
// Enter the new size of an array you want
// 2
// Enter the new value number 0 of an array
// 34
// Enter the new value number 1 of an array
// 54
// The new values at position 0 of an array is 34
// The new values at position 1 of an array is 54
