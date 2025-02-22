#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter the number of rows of star pattern you want\n");
    scanf("%d", &rows);

    printf("Enter 0 for starpattern and 1 for reverse star pattern\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;

    default:
        printf("you are entered the invalid choice\n");
        break;
    }

    // reversestarpattern(rows);
    // starpattern(rows);
    return 0;
}