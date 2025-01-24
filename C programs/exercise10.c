#include <stdio.h>
int main()
{
    int m , n ,sum;
    int a[3][4], b[4][3],result[3][3];

    printf("Enter the first matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d\n",&a[i][j]);
        }
        
    }

    printf("Enter the second matrix\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d\n",&b[i][j]);
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}