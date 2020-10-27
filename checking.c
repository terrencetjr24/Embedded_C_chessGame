#include "board.h"
#include "move.h"

/* Wrapper function to check for everything necessary and save recomputation 
// 
// -1 = there's been no checkmate
// 0 = white wins
// 1 = black wins 
// 2 = stalemate
//
// Returns: winner value
*/
int checkingWrapper(Board *board, Move* currentMove){
    int winner = -1;
    char isCheck = -1; // 0 = white is in check, 1 = black is in check
    // Looking for checkmate
    winner = checkForCheckMate(board, currentMove);
    // Looking for stalemate
    winner = checkForStaleMate(board, currentMove);
    // Looking for castling priveleges
    checkForCastlingPriveleges(board);
    // Checking for 3 fold repitions
    winner = checkForRepetition(currentMove);
    // Looking for ...

    return -1;
}

//looking for checkmate
//lookgng for stalemate
//looking for castling privileges


/* Function for checking if the game has reached a check
// 
// -1 = there's been no checkmate
// 0 = white wins
// 1 = black wins 
//
// Returns: winner value
*/
int checkForCheckMate(Board *board, Move* currentMove){
    return -1;
}

/* Function for checking if there is a check on the checking color
// 
// 0 = no check
// 1 = there is a check on the input color
//
// Returns: check value
*/
int isCheck(Board *board, int checkingColor){
    return 0;
}

/* Function for looking for stalemates
//
// -1 = no stalemate
// 2 = stalemate
//
// Returnn: winner value
*/
int checkForStaleMate(Board* board, Move* currentMove){
    return -1;
}

/* Function for looking for castle priveleges
//
// Updates the board directly
// (Values to update by are in board.h)
// Returns: None
*/
void checkForCastlingPriveleges(Board* board){
    return;
}

/* Function for checking for 3 fold repition
// -1 = no stalemate
// 2 = draw
// 
// Return: winner value
*/
int checkForRepetition(Move* currentMove){
    return -1;
}
