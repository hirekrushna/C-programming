#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // this variable is declared because to track we are inside tag or not.Tag means <h1>.(0 for inside & 1 for outside).
    int index = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 0; // we are inside tad so ignore characters.
            continue;
        }
        else if (string[i] == '>')
        {
            in = 1; // we are outside the tag so collecting the characters.
            continue;
        }
        if (in == 1)
        {
            string[index] = string[i]; // Store characters outside the tag.
            index++;
        }
    }
    string[index] = '\0'; // Null terminate the resulting string.

    // This is for removing the trialing spaces from the begining.
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    // This is for removing the trailing spaces from the end.
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>     This is Heading 1      </h1> ";
    parser(string);
    printf("After parsed the string is ~~%s~~", string);
    return 0;
}