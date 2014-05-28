#include"boardFuncs.h"

using namespace std;

//createBoard initializes a 10x22 array of chars
void createBoard(char** &myBoard) {
  for (int i = 0; i < 22; ++i) {   //for each horizontal line
    for (int j = 0; j < 10; ++j) { //create every dot in that line
      myBoard[i][j] = 46;          //46 is the ascii code for .
    }
  }
}

//printBoard prints a 10x22 array of chars to cout
void printBoard(char** &myBoard) {
  for (int i = 0; i < 22; ++i) {
    for (int j = 0; j < 10; ++j) {
      cout << myBoard[i][j] << " ";
    }
    cout << endl;
  }
}

//loadBoard loads an array from std::cin
void loadBoard(char** &myBoard) {
  for (int i = 0; i < 22; ++i) {
    for (int j = 0; j < 10; ++j) {
      cin >> myBoard[i][j];
    }
  }
}

/*stepBoard moves forward one step in the simulation
  from testris.py's instructions:
  if the matrix contains an unbroken row of blocks:
   - clear the row
   - increment linesCleared by 1
   - increment currentScore by 100
*/
void stepBoard(char** &myBoard, int &lC, int &tS) {
  
  for (int i = 0; i < 22; ++i) { //for every row
    bool lineCleared = true; //fresh bool
    for (int j = 0; j < 10; ++j) { //check the row
      if (myBoard[i][j] == 46) { //to see if it has a .
	lineCleared = false; 
	//if so, line was not cleared
      }
    }
    
    //at the end of every row
    if (lineCleared) { //if the line was cleared
      lineCleared = false; //reset this 
      lC++; tS+=100; //fix scores
      for (int j = 0; j < 10; j++)
	myBoard[i][j] = 46; //clear the line
    }
  }
}
