#include <stdio.h>

//THESE PROGRAM OF SWAPING THE ELEMENTS OF AN ARRAY.
//THIS IS FOR ODD NUMBER OF ELEMENTS IN AN ARRAY.

// int arrayrev(int arr[])
// {
//     for (int i = 0; i < 7 / 2; i++)
//     {
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[6 - i];
//         arr[6 - i] = temp;
//     }
// }

// int arrayprint(int arr[])
// {
//     for (int i = 0; i < 7; i++)
//     {
//         printf(" The value of %d of an array is %d\n ", i, arr[i]);
//     }

// }
// int main()
// {
//     int arr[] = {45, 33, 10, 7, 18, 17, 93};

//     printf("Before reversing the array\n");
//     arrayprint(arr);

//     arrayrev(arr);

//     printf("\n After reversing the array \n");
//     arrayprint(arr);

//     return 0;
// }



//THIS IS FOR EVEN NUMBER OF ELEMENTS IN AN ARRAY.

int arrayrev(int arr[])
{
    for (int i = 0; i < 6 / 2; i++)        //Here if you not doing 6/2 then the array is swap and if you are written on the place of 6/2 is only 6 then the array will swap completely means it will swap and again it will comes in original form.
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}

int arrayprint(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf(" The value of %d of an array is %d\n ", i, arr[i]);
    }

}
int main()
{
    int arr[] = {45, 33, 10, 7, 18, 17};

    printf("Before reversing the array\n");
    arrayprint(arr);

    arrayrev(arr);

    printf("\n After reversing the array \n");
    arrayprint(arr);

    return 0;
}