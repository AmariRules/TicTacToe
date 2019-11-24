/*#include "board.h"
#include <stdexcept>
#include <cstdlib>   // std::exit and EXIT_FAILURE macro
#include <iostream>  // std::cout, std::cin, std::cerr, std::endl

//bool isWon(char, char[][3]);
//bool isDraw(char[][3]);
//void displayBoard(char[][3]);
//void makeAMove(char[][3], char);


bool isWon(char a, char board[][3]){

    for (int i = 0; i<3; i++){
        if (board[i][0] == a && board[i][1] == a && board[i][2] == a)
           return true;
        if (board[0][i] == a && board[1][i] == a && board[2][i] == a)
           return true;
    }
    if (board[0][0] == a && board[1][1] == a && board[2][2] == a)
       return true;
    if (board[0][2] == a && board[1][1] == a && board[2][0] == a)
       return true;
    return false;
}

bool isDraw(char board[][3]){

    int count = 0;
    for(int i = 0; i<3; i++){
       for (int j = 0; j<3; j++){
          if (board[i][j] == 'X' || board[i][j] == 'O')
             count++;
       }
    }
    if (count != 9)
       return false;
    if (!isWon('X', board) && !isWon('O',board))
       return true;
}

void displayBoard(char board[][3]){

   std::cout << "-------------\n";
   for (int i = 0; i<3; i++){
       std::cout << "|";
       for (int j = 0; j<3; j++){
           std::cout << board[i][j] << "|";
       }
      
       std::cout << std::endl;
       std::cout << "-------------\n";
      
   }
}


void makeAMove(char board[][3], char a){

   while(true){
       std::cout << "Enter a row(0,1,2) for player " << a << ":";
       int b;
       std::cin >> b;
       int c;
       std::cout << "Enter a column(0,1,2) for player " << a << ":";
       std::cin >> c;
       if ( b < 0 || b > 2 || c < 0 || c > 2){
          cout << "Invalid Move\n";
       }
       else {
           if (board[b][c] != 'X' && board[b][c] != 'O'){
              board[b][c] = a;
              break;
           }
           else {
               cout << "Invalid Move\n";
           }
       }    
   }

/*
Board::displayBoard(char[][]){
        system("clear");
    std::cout <<"\t\t";  // adds tabs
        for (int h = 0; h < size_; h++) {   //loop to add numbers 
            if(h<size_)                     
            std::cout << " " << h << "   "; 
            else
                   std::cout << std::endl;
        }
    std::cout << "\n\t\t+";

    for (int k = 0; k < size_; k++) {
        std::cout << "---+";
    }
    for (int i = 0; i < size_; i++) {
        std::cout << "\n\t\t|";
        for (int j = 0; j < size_; j++) {
            std::cout << " " << grid_[i][j] << " |";
        }
        std::cout << "\n\t\t+";
        for (int k = 0; k < size_; k++) {
            std::cout << "---+";
        }
    }
    std::cout << std::endl << "\n\t\t";
}

Board::isWon(char, char[][]){
    return false;
}



Board::Board(char[][]) {
    try {
        grid_ = new char*[size_];
        for (int i = 0; i < size_; i++) {
            grid_[i] = new char[size_];
        }
    } catch (std::bad_alloc e) {
        std::cerr << "\nBad Allocation";
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size_; i++) {
        for (int j = 0; j < size_; j++) {
            grid_[i][j] = ' ';
        }
    }
}

    Board::~Board() {
    for (int i = 0; i < size_; i++) {
        delete[] grid_;
    }
    delete grid_;
    }*/
    /*
    void Board::Display() {
    system("clear");
    cout <<"\t\t";  // adds tabs
        for (int h = 0; h < size_; h++) {   //loop to add numbers 
            if(h<size_)                     
            cout << " " << h << "   "; 
            else
                   cout << endl;
        }
    cout << "\n\t\t+";

    for (int k = 0; k < size_; k++) {
        cout << "---+";
    }
    for (int i = 0; i < size_; i++) {
        cout << "\n\t\t|";
        for (int j = 0; j < size_; j++) {
            cout << " " << grid_[i][j] << " |";
        }
        cout << "\n\t\t+";
        for (int k = 0; k < size_; k++) {
            cout << "---+";
        }
    }
        cout << endl << "\n\t\t";
    }
    */
    // Marks the player in the given row and column and returns true on success.
// If the position is invalid or already occupied, print an error to cerr and
// return false.
/*
bool Board::Mark(Player player, int row, int column) {
    if (row < 0 || row >= size_ || column < 0 || column >= size_) {
        return false;
    }
    if (grid_[row][column] == ' ') {
        if (player == Player::X) {
            grid_[row][column] = 'X';
            return true;
        } else if (player == Player::O) {
            grid_[row][column] = 'O';
            return true;
        } else {
            return false;
        }
    }
    return false;
}
  */
*/