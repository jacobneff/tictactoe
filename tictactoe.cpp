#include <iostream>

int main() {
  int choice, move;
  char symbol1, symbol2;

  std::cout << "Welcome to TicTacToe in the terminal!\n\nFollow the directions to play the game!" << std::endl;

  std::cout << "\nPlayer 1, choose your symbol to play!\n1. 'X'\n2. 'O'\n(Enter 1 or 2) --> ";
  std::cin >> choice;

  if (choice == 1) {
    symbol1 = 'X';
    symbol2 = 'O';
  }
  else if (choice == 2) {
    symbol1 = 'O';
    symbol2 = 'X';
  }
  else {
    std::cout << "That is an invalid choice." << std::endl;
    return 1;
  }

  std::cout << "\nBelow is the numbered grid of the tic-tac-toe board you will use to input your moves." << std::endl;

  std::cout << " 1 | 2 | 3 " << std::endl;
  std::cout << "---|---|---" << std::endl;
  std::cout << " 4 | 5 | 6 " << std::endl;
  std::cout << "---|---|---" << std::endl;
  std::cout << " 7 | 8 | 9 " << std::endl;

  std::cout << "Player 1 make your first move: ";
  std::cin >> move;

  if (move == 1)

  return 0;
}
