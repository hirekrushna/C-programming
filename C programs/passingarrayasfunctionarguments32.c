#include <stdio.h>

// METHOD 1 ::BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION
//  int func1(int arr[])
//  {
//      for (int i = 0; i < 5; i++)
//      {
//          printf("The value at index %d is %d\n",i,arr[i]);
//      }
//      //arr[3] = 45;  //This is very important point because if you change the any vlue in array here then it will change in main function.

// }

// int main()
// {
//     int arr[] = {2,3,5,4,6};
//     printf("The value at index 0 is %d\n",arr[0]);      //output = 2
//     //printf("The value at index 0 is %d\n\n",*(arr));      //output = 2
//     func1(arr);
//     printf("The value at index 3 is %d\n",arr[3]);       //output = 45 , output != 4
//     return 0;
// }



// METHOD 2 ::BY DECLARING 2 DIMENSIONAL ARRAY AS A PARAMETER IN THE FUMCTION.

// int func2(int arr[2][3])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("The value at index %d, %d of an array is %d\n", i, j, arr[i][j]);
//         }
//     }
//     arr[1][0] = 57;  //This is very important point because if you change the any vlue in array here then it will change in the main function.
// }

// int main()
// {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     {
//         printf("The value at index %d , %d of an array is %d\n", 1, 2, arr[1][2]);
//     }

//     func2(arr);  //call a function
//     printf("\n\n\n");
//     func2(arr);   //call a function after changing the value at index 1,0 of an array from 4 to 57.
//     return 0;
// }

// METHOD 3::BY DECLARING A POINTER IN THE FUNCTION TO HOLD THE BASE ADDRESS OF THE ARRAY.

int func3(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d of an array is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 33; // This is very important point because if you change the any vlue in array here then it will change in the main function.
}

int main()
{
    int arr[] = {9, 8, 7, 6};

    func3(arr);
    printf("\n\n");
    func3(arr); // call a function after changing the values with the pointer from 7 to 33.
    return 0;
}

// Explanation of above code ::first of all in main function we declare the arrayof size 4 then we call the function 3 and in that function 3 we stored that array in function 3 we declare pointer and apply the for loop and printf the values of an array with the help of pointer after that we change the 1 value in array with the help of pointer and again call the function now the we change that value will print in the place of given value.
