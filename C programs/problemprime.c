#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number to check whether the number is prime or not\n");
    scanf("%d",num);


    if (num % 1 == 0  || num % num ==0)
    {
        printf("The number is the prime number");

    }
    else {
        printf("The number is not a prime number");
    }
    return 0;
}