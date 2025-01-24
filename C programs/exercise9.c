#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int GenerateRandomNumber(int n)
// {
//     srand(time(NULL));
//     return rand() % n;
// }

// int main()
// {
//     printf("The random number between 1 to 15 is %d\n",GenerateRandomNumber(15));   //Here the output of this code is a random number between 1 to 15 means jab hum program run karte hai tabhi 1 se 15 ke bich me konsa bhi number output aayega.
//     return 0;
// }

int GenerateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For rock, paper and scissor - Returns 1 if char1 > char2 and 0 otherwise. If char1 == char2 if will return -1.

    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else if ((char2 == 'R') && (char1 == 'S'))
    {
        return 0;
    }
    else if ((char1 == 'P') && (char2 == 'R'))
    {
        return 1;
    }
    else if ((char2 == 'P') && (char1 == 'R'))
    {
        return 0;
    }
    else if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else if ((char2 == 'S') && (char1 == 'P'))
    {
        return 0;
    }

}

int main()
{

    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome to the Rock, Paper ,Scisssor.\n");

    for (int i = 0; i < 3; i++)
    {

        // Take player's input.
        printf("Player's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Generate computer's input.
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");
        temp = GenerateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU choose %c\n\n", compChar);

        // Compares the Scores.
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU Got it!\n");
        }

        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a draw!\n");
        }

        else
        {
            playerScore += 1;
            printf("You Got it!\n");
        }

        printf("You: %d\n CPU: %d\n", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("You win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("It's a draw\n");
    }

    return 0;

}
