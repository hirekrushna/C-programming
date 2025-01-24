#include <stdio.h>
#include <stdlib.h>  //This header file is for malloc.


//CASE 1: DEALLOCATION OF MEMORY.
int main()
{
    int *ptr = (int*)malloc(sizeof(int));
    int a = 45;
    ptr = &a;
    free(ptr);      //ptr is now a dangling pointer because we use malloc function and after using malloc we use free (ptr) means the dynamic memory which is allocate for malloc in heap that memory will now free and therefore int a will get destroy.

    return 0;
}


//CASE 2: RETURNING LOCAL VARIABLES IN FUNCTION CALLS.

int *myfunc(){
    int a = 33;
    return &a;
}

int main()
{
    int *ptr = myfunc();        //myfunc() is now a dangling pointer because after calling myfunc() function myfunc() return the address of a and after that int a will destroy .
    printf("%d",*ptr);
    return 0;
}



//CASE 3: VARIABALE GOING OUT OF SCOPE.

int main()
{
    int *ptr;
    {
        int k = 18;
        ptr = &k;
    }
    //ptr is now a dangling pointer because after deeclaring a pointer the scope is started and in that scope k variable is declared and return its address to ptr then scope will ends and after that the variables which are declared or defined in the scope will get destroy.
    printf("%d",*ptr);

    return 0;
}


