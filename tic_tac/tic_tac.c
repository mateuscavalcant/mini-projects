// TIC-TAC GAME
#include <stdio.h>
#include <conio.h>  // getch()
#include <stdlib.h> // system()

// Game board
char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Function to display the game board
void showBoard();

// Function to check for a win
int checkForWin();

int main()
{
    int player = 1;   // Current player
    int choice, i;    // Player's choice and loop control variable
    char mark;        // Current player's mark (X or O)
    char choice_char; // Player's choice to play again

    do
    {
        // Reset the game board
        for (int i = 1; i < 10; i++)
        {
            arr[i] = i + '0';
        }

        do
        {
            showBoard();                   // Display the game board
            player = (player % 2) ? 1 : 2; // Toggle between players
            printf("Player %d turn: ", player);
            scanf("%d", &choice);             // Get player's choice
            mark = (player == 1) ? 'X' : 'O'; // Set player's mark

            // Check if the player's choice is valid
            if (choice >= 1 && choice <= 9 && arr[choice] == (choice + '0'))
                arr[choice] = mark;
            else
            {
                printf("Invalid value\n");
                player--;
                getch();
            }

            i = checkForWin(); // Check for a win
            player++;
        } while (i == -1); // Continue while the game is ongoing

        showBoard(); // Display the final board

        // Display the game result
        if (i == 1)
            printf("Player %d Won\n\n", --player);
        else
            printf("Game Draw\n\n");

        // Ask the player if they want to play again
        printf("Play Again? (s/n): ");
        scanf(" %c", &choice_char);

        while (getchar() != '\n')
            ; // Clear the input buffer

    } while (choice_char == 's' || choice_char == 'S'); // Continue while the player wants to play again

    return 0;
}

// Function to display the game board
void showBoard()
{
    system("cls"); // Clear the console screen
    printf("\tTIC TAC TOE\n\n");
    printf("       |       |      \n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[1], arr[2], arr[3]);
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[4], arr[5], arr[6]);
    printf("       |       |      \n");
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |   %c   \n", arr[7], arr[8], arr[9]);
    printf("       |       |      \n\n");
}

// Function to check for a win
int checkForWin()
{
    // Check all possible win combinations
    if (arr[1] == arr[2] && arr[2] == arr[3])
        return 1;
    else if (arr[4] == arr[5] && arr[5] == arr[6])
        return 1;
    else if (arr[7] == arr[8] && arr[8] == arr[9])
        return 1;
    else if (arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8])
        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        return 1;
    else if (arr[1] == arr[5] && arr[5] == arr[9])
        return 1;
    else if (arr[3] == arr[5] && arr[5] == arr[7])
        return 1;
    // Check if the board is full (draw)
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
        return 0;
    else
        return -1; // Return -1 if the game is still ongoing
}
