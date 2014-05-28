#include<iostream>
#include<string>
#include"boardFuncs.h"

using namespace std;

int main() {
  bool runGame = true;
  string input;

  int currentScore = 0;
  int linesCleared = 0;

  char **myBoard;
  myBoard = new char *[22];
  for (int i = 0; i < 22; ++i)
    myBoard[i] = new char[10];
  createBoard(myBoard);

  while (runGame) {
    cin >> input;
    if (input=="q")
      runGame = false;
    else if (input=="p")
      printBoard(myBoard);
    else if (input=="g")
      loadBoard(myBoard);
    else if (input=="c")
      createBoard(myBoard); //clear, same as initialize dots
    else if (input=="?s")
      cout << currentScore << endl;
    else if (input=="?n")
      cout << linesCleared << endl;
    else if (input=="s") {
      linesCleared += stepBoard(myBoard);
    }
  }
  return 0;
}
