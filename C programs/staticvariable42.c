#include <stdio.h>

int ret(){
    return 45;      //These fuction is created only for the understanding the statement static int k = ret(); 
}

int funct1(){
    static int k = 0;
    //static int k;       //Here if you not initialized the value of k but in static variable it will automatically intilized the value of k is 0.
    //static int k = ret();     //This line will give an error because for static variable there only initialized the digit not a function.
    k++;
    return k;
}

int main()
{
    printf("The value of k is %d\n",funct1());
    printf("The value of k is %d\n",funct1());
    printf("The value of k is %d\n",funct1());
    return 0;
}





//THIS IS THE CODE GIVEN BY HARRY BHAI.

#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int ret()
{
    return 43*3;
}

int func1(int b1)
{
    static int myvar = 0;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    // printf("%d", loc);
   return 0;
}
