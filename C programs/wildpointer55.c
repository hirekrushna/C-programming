#include <stdio.h>
int main()
{
    int a = 88;
    int *ptr;       //This is the wild pointer.
    //*ptr = 56;      //This is the not good thing to do because sometimes the program will crash.
    ptr = &a;       //ptr is no longer the wild pointer.

    printf("The value of a is %d\n",*ptr);
    return 0;
}