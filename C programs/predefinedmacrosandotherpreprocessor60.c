// 1. #undef:

// #define E 1111
// #undef E

// As can be guessed by the name, it is used to undefine a macro to eliminate its definition.
// E is not defined for any value after using #undef, so it holds no value in the above example.


// 2. #ifdef:

// #ifdef M
// //execute code if true i.e., the macro is defined.

// It is used to check whether a macro is defined or not. If it is defined, then it executes the code.


// 3. #ifndef:

// #ifndef M
// //execute code if true i.e., the macro is undefined

// It works exactly the opposite of ifdef. Meaning that it executes the code if the macro is undefined.


// 4. #if:

// #if condition 
// // execute code if true i.e. condition satisfied

// It checks whether the given condition is true or not. If true, then it executes the code.


// 5. #else:

// #if condition 
// // execute code if true else pass it to #else

// #else 
// // execute code if “if condition” is false

// If the condition of ‘if’ is false, then the else is executed.


// 6. #elif:

// #if condition 
// // execute code if true else pass it to #elif

// #elif expression 
// // execute code if true else pass it to #else

// #else 
// //else code

// It is used to insert more conditions between if and else. If the “if statement” is true, then elif won’t be checked.


// 7. #pragma:
// Pragma is used to issue some special commands to compiler.

// Let's discuss some pre-defined macros now. A pre-defined macro is a macro that has already been defined or understood by C preprocessor and does not need a definition.




#include <stdio.h>
int main()
{
    printf("Today's date is %s\n",__DATE__);
    printf("The exact time is %s\n",__TIME__);
    printf("The file name is %s\n",__FILE__);
    printf("The line number is %d\n",__LINE__);
    printf("ANSI is : %d\n",__STDC__);
    return 0;
}