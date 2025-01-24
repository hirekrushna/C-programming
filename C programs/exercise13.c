#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("The operation is %s\n", operation);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }

    else if (strcmp(operation, "substract") == 0)
    {
        printf("%d\n", num1 - num2);
    }

    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}


//OUTPUT::PS C:\Users\Krushna Hire\Documents\C programs> .\exercise13.exe add 8 2         //AFTER RUN THE PROGRAM WE NEED TO WRITE THE COMMAND IN THE TERMINAL THEN ENTER TO GET OUTPUT.
// The operation is add
// num1 is 8
// num2 is 2
// 10
// PS C:\Users\Krushna Hire\Documents\C programs> .\exercise13.exe substract 8 2 
// The operation is substract
// num1 is 8
// num2 is 2
// 6
// PS C:\Users\Krushna Hire\Documents\C programs> .\exercise13.exe multiply  8 2
// The operation is multiply
// num1 is 8
// num2 is 2
// 16
// PS C:\Users\Krushna Hire\Documents\C programs> .\exercise13.exe divide  8 2
// The operation is divide
// num1 is 8
// num2 is 2
// 4