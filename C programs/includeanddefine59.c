
//THIS IS THE EXAMPLES OF #include DIRECTIVES.

#include <stdio.h>
#include "arrays22.c"

int main()
{
    int var = 45;
    printf("The value of var is %d\n",var);
    return 0;
}




//THIS IS THE EXAMPLE OF #define DIRECTIVES.

#include <stdio.h>
#define PI 3.14

int main()
{
    float var = PI;
    printf("The value of PI is %f\n",PI);
    return 0;
}




//THIS IS THE EXAMPLE OF MACROS USING #define.

#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r*r

int main()
{
    int r = 5;
    printf("The area of circle is %f\n",PI * SQUARE(r));        //Formula for Area(circle) = PI*r^2.
    return 0;
}