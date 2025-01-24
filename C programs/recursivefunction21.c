#include <stdio.h>
//Code for calculation of factorial
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else{
        return (number * factorial(number-1));  //Recursion of function
    }
    
}

//Calculate and display the output
int main()
{   
    int number;
    printf("Enter the  number who's fatorial wants;\n");
    scanf("%d",&number);

    printf("The factorial of %d is %d\n",number,factorial(number));
    return 0;
}
