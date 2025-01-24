#include <stdio.h>

int palindrome(int num)
{
    int reversed = 0;
    int originalnumber = num;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;

    }
    
    printf("The reversed number is %d\n",reversed);

    if (originalnumber == reversed)
    {
        return 1;
    }

    else
    {
        return 0;
    } 
}


int main()
{
    int number;
    printf("Enter the number to check wheather the number is palindrome or not:\n");
    scanf("%d",&number);


    if (palindrome(number))
    {
        printf("The Entered number is palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    
    return 0;
}

