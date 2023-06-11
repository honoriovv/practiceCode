#include <iostream>
#include "sudoku.h"
using namespace std;


int main() {

	// TODO generate test data
	srand(time(NULL));

	int puzzle[][9] = {
		{6,0,3,0,2,0,0,9,0},
		{0,0,0,0,5,0,0,8,0},
		{0,2,0,4,0,7,0,0,1},
		{0,0,6,0,1,4,3,0,0},
		{0,0,0,0,8,0,0,5,6},
		{0,4,0,6,0,3,2,0,0},
		{8,0,0,2,0,0,0,0,7},
		{0,1,0,0,7,5,8,0,0},
		{0,3,0,0,0,6,1,0,5}
	};

	// test using random sudoku puzzle	
	sudoku testSudoku;
	testSudoku.printSudokuGrid();	
	std::cout << std::endl;
	testSudoku.solveSudoku();
	testSudoku.printSudokuGrid();	

	std::cout << std::endl <<  std::endl;

	// test using sudoku puzzle generated 
	sudoku sudokuGame(puzzle);
	sudokuGame.printSudokuGrid();	
	std::cout << std::endl;
	sudokuGame.solveSudoku();
	sudokuGame.printSudokuGrid();	
	std::cout << std::endl;

	
	


	
	
	return 0;
}