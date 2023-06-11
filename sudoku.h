#ifndef SUDOKU_H
#define SUDOKU_H

class sudoku {

	public:

		sudoku();

		sudoku(int g[][9]);

		// initializes with random data
		void initializeSudokuGrid();

		void initializeSudokuGrid(int g[][9]);

		void printSudokuGrid();

		bool solveSudoku();

		bool findEmptyGridSlot(int &row, int &col);

		bool canPlaceNum(int row, int col, int num);

		bool numAlreadyInRow(int row, int num);

		bool numAlreadyInCol(int col, int num);

		bool numAlreadyInBox(int smallGridRow, int smallGridCol, int num);

	private:
		
		int grid[9][9];
};

#endif