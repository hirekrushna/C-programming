#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}


int greethello(int (*fptr)(int, int)) // this is a callback function because it is calling function pointer as an argument.
{
    printf("Hello User\n");
    printf("the sum of 50 and 80 is %d\n", fptr(50, 80));
}

int greetgm(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("the sum of 50 and 80 is %d\n", fptr(50, 80));
}

int main()
{
    int (*fptr)(int, int); // function pointer declaration.
    fptr = sum;
    greethello(fptr);
    greetgm(fptr);

    return 0;
}



