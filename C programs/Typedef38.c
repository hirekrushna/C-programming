#include <stdio.h>

//TYPEDEF EXAMPLES IN DIFFERENT APPLICATION.

//1. UNSIGNED LONG.
// int main()
// {
//     typedef unsigned long ul;       //unsigned long is the privous name and ul is the aliase name.
//     ul a = 25 , b = 35;
//     printf("The value of a is %d\n",a);
//     printf("The value of b is %d\n",b);
    
//     return 0;
// }



//2. STRUCTURE ARRAY. 
//Here struct student is the previous name and the std is the aliase name means new name .
 
// typedef struct student
// {
//     int id;
//     int marks;
//     char name;
// }std;

// int main()
// {
//     std s1 , s2;
//     s1.id = 22;
//     s2.id = 11;
//     printf("The id of s1 is %d\n",s1.id);
//     printf("The id of s2 is %d\n",s2.id);
//     return 0;
// }



//3.POINTER.

int main()
{
    //int *a,b;     //Here only a is the pointer.

    typedef int *intPointer;
    intPointer a, b;        //Here now both a abd b are pointer with the help of typedef.
    int c = 89;
    a = &c;
    b = &c;
    printf("The address of a is %d\n",a);
    printf("The adddress of b is %d\n",b);
    printf("The value of a is %d\n",*a);
    return 0;
}



//NOTE :- NOT ONLY IN UNSIGNED LONG, STRUCTURE ARRAY AND POINTER THEIR ARE SO MANY USES OF TYPEDEF IN OTHER APPLICATIONS.