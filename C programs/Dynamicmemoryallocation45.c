#include <stdio.h>
int main()
{
    int a = 45;
    printf("The value of a is %d\n",a);
    return 0;
}



//IF YOU GO IN NEW TERMINAL THEN YOU TYPE THE [[gcc Dynamicmemoryallocation45.c ; size .\a.exe]] THEN IT SHOWS THE HOW MANY DATA IS TAKING BY THE PROGRAM.
//THESE BELOW DATA SHOWS THE DATA OF THIS PROGRAM.

// PS C:\Users\Krushna Hire\Documents\C programs> gcc Dynamicmemoryallocation45.c ; size .\a.exe
//    text    data     bss     dec     hex filename
//   14400    1552     112   16064    3ec0 .\a.exe
// PS C:\Users\Krushna Hire\Documents\C programs> 

//This is the use of size command.