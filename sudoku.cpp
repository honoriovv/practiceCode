#include "sudoku.h"
	void initializeSudokuGrid();




	bool findEmptyGridSlot(int &row, int &col) {
		return grid[row][col] == 0;
	}

	bool canPlaceNum(int row, int col, int num) {
		// if can can be placed in grid[row][col]
	}

	bool numAlreadyInRow(int row, int num);
	// returns true if num is in grid[row][]


	bool numAlreadyInBox(int smallGridRow, int smallGridCol, int num);
	// num is in th small grid

sudoku::sudoku(int g[][9]) {
	initializeSudokuGrid(g);
}

bool sudoku::numAlreadyInCol(int col, int num); {
	for(int i = 0; i < 9; i++) {
		if(grid[i][col] == num)
			return true;
	}
	return false;
	// returns true if num is in grid[row][]
}

void sudoku::initializeSudokuGrid(int g[][9]) {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++)
			 grid[i][j] = g[i][j];

	}
}
void sudoku::printSudokuGrid() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++)
			cout << grid[i][j] << " ";

		cout << endl;
	}
}
bool numAlreadyInRow(int row, int num) {
	for(int i = 0; i < 9; i++) {
		if(num == grid[row][i])
			return true;
	}
	return false;
}
bool sudoku::solveSudoku() {
	int row, col;

	if(findEmptyGridSlot(row,col)) {
		for(int num = 1; num <= 9; num++) {
			if(canPlaceNum(row,col,num)) {
				grid[row][col] = num;
				if(solveSudoku()) // recursive call
					return true;

				grid[row][col] = 0;
			}
		}
		return false; // backtrack
	}
	else
		return true; // there are no empty slots
}
