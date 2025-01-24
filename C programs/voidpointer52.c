#include <stdio.h>
int main()
{
    
    int a = 45;
    float b = 9.365;
    void * ptr;

    ptr = &a;
    //printf("The value of a is %d\n", *ptr);       //This line will give error because this is the void pointer and we are not doing directly dereference of void pointer. 
    printf("The value of a is %d\n",*((int*)ptr)   );       //Here we are doing first the typecasting means jo pointer hai wo kya hai integer hai ya fir float hai.

    ptr = &b;
    //printf("The value of b is %f\n", *ptr);       //This line will give error because this is the void pointer and we are not doing directly dereference of void pointer. 
    printf("The value of a is %f\n",*((float*)ptr)   );       //Here we are doing first the typecasting means jo pointer hai wo kya hai integer hai ya fir float hai.
    
    return 0;
}