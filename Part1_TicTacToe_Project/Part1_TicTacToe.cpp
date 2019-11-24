/* 
 * File:   Part1_TicTacToe.cpp
 * Author: AmariBolmer
 *
 * Created on July 3, 2018, 7:28 PM
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

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

   std::cout << "-------------\n"; // std:: isn't needed here since using namespace is used, but for good practice std will be used.
   for (int i = 0; i<3; i++){
       std::cout << "| ";
       for (int j = 0; j<3; j++){
           std::cout << board[i][j] << " | ";
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
          std::cout << "Invalid Move\n";
       }
       else {
           if (board[b][c] != 'X' && board[b][c] != 'O'){
              board[b][c] = a;
              break;
           }
           else {
               std::cout << "This cell is already occupied. Try a different cell\n" << std::endl ;
           }
       }    
   }
}

int main() {
	//
	//	Main
	//
	char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
	displayBoard(board);

	while (true) {
		// The first player makes a move
		makeAMove(board, 'X');
		displayBoard(board);
		if (isWon('X', board)) {
			cout << "X player won" << endl;
			exit(0);
		}
		else if (isDraw(board)) {
			cout << "No winner" << endl;
			exit(0);
		}

		// The second player makes a move
		makeAMove(board, 'O');
		displayBoard(board);

		if (isWon('O', board)) {
			cout << "O player won" << endl;
			exit(0);
		}
		else if (isDraw(board)) {
			cout << "No winner" << endl;
			exit(0);
		}
	}

	return 0;
}


