#include <stdio.h>
int main()
{

    char c;

    printf("Enter u for the uppercase alphabets\n");
    printf("Enter l for the lowercase alphabets\n");
    scanf("%c\n", &c);

    if (c == 'U' || c == 'u')
    {
        for (c = 'A'; c <= 'Z'; c++)
        {
            printf("%c\n", c);
        }
    }

    else if (c == 'L' || c == 'l')
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            printf("%c\n", c);
        }
    }

    else
    {
        printf("You have entered wrong character instead of u and l");
    }
    return 0;
}



