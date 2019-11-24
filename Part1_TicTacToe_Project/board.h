/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   board.h
 * Author: AmariBolmer
 *
 * Created on July 3, 2018, 7:45 PM
 */
#ifndef BOARD_H
#define BOARD_H

enum class Player { X, O };
enum class Winner { STILL_PLAYING, X, O, STALEMATE };

class Board {
  public:
    // Constructor
    //   size: the size of the grid (i.e. size x size)
    Board(int size);

    bool isWon(char, char[][]);
    bool isDraw(char[][]);
    void displayBoard(char[][]);
    void makeAMove(char[][], char);
    
    
    // Destructor
    ~Board();

    // Prints the current board to the screen
    void Display();

    // Marks the player in the given row and column and returns true on success.
    // If the position is invalid or already occupied, print an error to cerr
    // and return false.
   // bool Mark(Player player, int row, int column);

    // Returns the winner if they have won, or indicates if the game is still in
    // progress or ended in a stalemate (see enum class Winner for details).
    //Winner CheckWinner();

  private:
    int size_;     // The size of the grid (i.e. size x size)
    char** grid_;  // The 2D grid for the board
};

#endif // BOARD_H
