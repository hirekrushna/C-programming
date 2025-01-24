#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("The value of argc is %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index number %d has a value of %s\n", i, argv[i]);
    }

    return 0;
}
   
   //afterrunning the program in the terminal we can give the arguments as well like .\commandlinearguments68.exe krushna is the big fan of rohit sharma in cricket. exe file che name lihilya nantar je kahi sentence aapan type karto tya madhla pratyek word output la print hoto.

//    The value of argc is 11
// The argument at index number 0 has a value of C:\Users\Krushna Hire\Documents\C programs\commandlinearguments68.exe
// The argument at index number 1 has a value of krushna
// The argument at index number 2 has a value of is
// The argument at index number 3 has a value of the
// The argument at index number 4 has a value of big 
// The argument at index number 5 has a value of fan
// The argument at index number 6 has a value of of
// The argument at index number 7 has a value of rohit
// The argument at index number 8 has a value of sharma
// The argument at index number 9 has a value of in
// The argument at index number 10 has a value of cricket.



