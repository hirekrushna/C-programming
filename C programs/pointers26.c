#include <stdio.h>
int main()
{
    int a = 45;
    int *ptra = &a;
    int *ptr2 = NULL;

    //Here in this type of program the main thing is format specifiers means %d,%x,%p,etc.%x format specifier is used to tell the compiler there is hexadecimal value is in the variable 

    printf("The address of pointer a is %p\n",&ptra);
    //printf("The address of pointer a is %x\n",&ptra);

    // printf("The address of a is %x\n",ptra);
    // printf("The address of a is %x\n",&a);
    printf("The address of a is %p\n",ptra);
    printf("The address of a is %p\n",&a);

    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*ptra);

    //printf("The address of pointer 2 is %x\n",&ptr2);
    //printf("The value of pointer 2 is %x\n",ptr2);
    printf("The address of pointer 2 is %p\n",&ptr2);
    printf("The value of pointer 2 is %d\n",ptr2);

    return 0;
}
