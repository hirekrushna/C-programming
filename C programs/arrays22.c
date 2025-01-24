#include <stdio.h>

// The first method to write a array

// int main()
// {
//     int marks[4];

//     marks[0] = 25;
//     printf("The marks of student 0 is %d\n",marks[0]);

//     marks[1] = 56;
//     printf("The marks of student 1 is %d\n",marks[1]);

//     marks[2] = 58;
//     printf("The marks of student 2 is %d\n",marks[2]);

//     marks[3] = 57;
//     printf("The marks of student 3 is %d\n",marks[3]);

//     marks[4] = 69;
//     printf("The marks of student 4 is %d\n",marks[4]);

//     return 0;
// }

// Second method to write an array

// one dimensional array
// example 1
//   int main()
//   {
//      int marks[5];
//      for (int i = 0; i < 5; i++)
//      {
//          printf("Enter the value of %d of an array : \n",i);
//          scanf("%d",&marks[i]);
//      }

//     return 0;
//  }

// example two
//  int main()
//
//     int marks[4] = {55,36,89,54};
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value at position %d of an array is %d\n",i,marks[i]);
//     }

//     return 0;
//  }

// Two dimensional array
// Example 1
//  int main()
//  {
//      int marks[2][3];
//      for (int i = 0; i < 2 ; i++)
//      {
//        for (int j = 0; j < 3 ; j++)
//        {
//         printf("Enter the value of %d , %d is \n",i,j);
//         scanf("%d",&marks[i][j]);
//        }

//     }

//     return 0;
// }

// Two dimensional array
// Example 2
// int main()
// {
//     int marks[2][2] = {{25, 36}, {58, 69}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("The value of %d , %d of an array is %d\n", i, j, marks[i][j]);
//             // printf("%d ",marks[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }





//THESE EXAMPLE IS GIVEN IN THE SOURCE CODE OF HARRY BHAI.
int main()
{
    // One dimensional array
    int marks[10], sum = 0;
    printf("Enter marks of 10 students : \n\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("Marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    int average = sum / 10;
    printf("\nThe average marks of 10 students are %d", average);
    return 0;
}