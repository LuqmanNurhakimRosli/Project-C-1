// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
 
char boar[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
void checkFreeSpaces();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinter();
void printWinter(char);


int main() {
{
    char winner = ' ';
    
    resetBoard();
    printBoard();
    
    return 0;

}
        
    
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board [0][1]);
    printf("\n---|===|===\n");
}

void checkFreeSpaces()
{
    
}
int checkFreeSpaces()
{
    
}
void playerMove()
{
    
}
void computerMove()
{
    
}
char checkWinter()
{
    
}
void printWinter(char winner)
{
    
}
  
    
}
