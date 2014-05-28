#include"boardFuncs.h"

using namespace std;

//createBoard initializes a 10x22 array of chars
void createBoard(char** myBoard) {
  for (int i = 0; i < 22; ++i) {   //for each horizontal line
    for (int j = 0; j < 10; ++j) { //create every dot in that line
      myBoard[i][j] = 46;          //46 is the ascii code for .
    }
  }
}

//printBoard prints a 10x22 array of chars to cout
void printBoard(char** myBoard) {
  for (int i = 0; i < 22; ++i) {
    for (int j = 0; j < 10; ++j) {
      cout << myBoard[i][j] << " ";
    }
    cout << endl;
  }
}
