#include <stdio.h>
#include <stdlib.h>

//THIS IS THE HINT AND WHAT WAS DOING IN THE PROGRAM GIVEN BY HARRY BHAI.

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
    

    return 0;
}





//THIS IS THE ACTUAL SOLUTION OF THE ABOVE QUESTION

// int main()
// {
//     int chars, i = 0;
//     char *ptr;

//     while (i < 3)
//     {
//         printf("Employee %d :Enter the characters in your Employee id\n", i + 1);
//         scanf("%d", &chars);

//         ptr = (char *)malloc((chars + 1) * sizeof(char)); // Here (chars + 1) is used because in string the null character is present at last i.e '\0'.

//         printf("Enter your Employee Id \n");
//         scanf("%s", ptr); // Here is not applying &ptr because ptr is stores the address of another variable and '&' is also stores the address so 'ptr' is doing work of '&' in this example.

//         printf("Your Employee Id is %s\n\n", ptr); // Here %s format specifier is used because in our ptr string is present.

//         free(ptr);

//         i++;
//     }

//     return 0;
// }







int main()
{
    int chars, i = 0;
    char *ptr;
    char a, b;

    while (i < 3)
    {
        printf("Employee %d :Enter the characters in your Employee id\n", i + 1);
        scanf("%d", &chars);

        getchar();
        printf("Enter the value of a\n");
        scanf("%c",&a);             //Here when you run the program then then after running they will not ask the value of a it will directly ask the value of b because when you press the Enter then our progrm is going in input buffer and it will skip the scanf for a.
                                    //For avoid this type of strange behavior we used the getchar();.

        getchar();
        printf("Enter the value of b\n");
        scanf("%c",&b);

        ptr = (char *)malloc((chars + 1) * sizeof(char)); // Here (chars + 1) is used because in string the null character is present at last i.e '\0'.

        printf("Enter your Employee Id \n");
        scanf("%s", ptr); // Here is not applying &ptr because ptr is stores the address of another variable and '&' is also stores the address so 'ptr' is doing work of '&' in this example.

        printf("Your Employee Id is %s\n\n", ptr); // Here %s format specifier is used because in our ptr string is present.

        free(ptr);

        i++;
    }

    return 0;
}