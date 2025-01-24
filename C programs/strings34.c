#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }

    for (int i = 0; str[i] !='\0'; i++)
    {
        printf("%c",str[i]);
    }
    
    printf("\n");
}

int main()
{
    //char str[8] = {'K', 'R', 'U', 'S', 'H', 'N', 'A', '\0'};  //In this string if size of string is less than 8 then in output the garbage value will print because in KRUSHNA name there are 7 letters and 1 size for "\0".Therefore at least 8 is mandatory for this example .ths string size is depends on the word which you print in output.
    //char str[] = "KRUSHNA";  //Here is not need of \0 because KRUSHNA name is in "" so our compiler will consider a \0 after the KRUSHNA.
    
    char str[25];
    
    printf("Enter your str \n");


    gets(str);  // Used to take the string from the user. means jo proogrammer hai wo program run karne ke bad string likhega aur fir ye jo 3 tarike hai print karne ke uski help se wo string print honge.

    printf("Using custom function printstr\n");
    printstr(str);

    printf("Using printf :: %s\n",str);

    printf("Using puts ::");
    puts(str);

    return 0;
}