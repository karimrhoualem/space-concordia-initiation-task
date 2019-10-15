#pragma once
#include <iostream>
using namespace std;

void printBoard();
void getMovePlayer1();
void getMovePlayer2();
int checkBoardAvailability(char position);
bool checkWinnerPlayer1();
bool checkWinnerPlayer2();
void playGame();

// Initialize the board with the number of each square
char board[10] = {'1','2','3','4','5','6','7','8','9'};

// Function that will print the original and updated board to the screen
void printBoard() {

	cout << "Player 1 (X) ---------------- Player 2 (O)" << endl << endl;

	cout << "\t\t" << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "\t\t" << "---------" << endl;
	cout << "\t\t" << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "\t\t" << "---------" << endl;
	cout << "\t\t" << board[6] << " | " << board[7] << " | " << board[8] << endl;
	cout << endl;
}

void getMovePlayer1() {

	char move = ' ';

	int control = 1;

	while (control) {

		cout << "Player 1 (X) - Please enter next move on board (1-9): \n";
		cin >> move;
		cout << endl;

		if (move == board[0] && checkBoardAvailability(board[0])) {
			board[0] = 'X';
			control = 0;
		}
		else if (move == board[1] && checkBoardAvailability(board[1])) {
			board[1] = 'X';
			control = 0;
		}
		else if (move == board[2] && checkBoardAvailability(board[2])) {
			board[2] = 'X';
			control = 0;
		}
		else if (move == board[3] && checkBoardAvailability(board[3])) {
			board[3] = 'X';
			control = 0;
		}
		else if (move == board[4] && checkBoardAvailability(board[4])) {
			board[4] = 'X';
			control = 0;
		}
		else if (move == board[5] && checkBoardAvailability(board[5])) {
			board[5] = 'X';
			control = 0;
		}
		else if (move == board[6] && checkBoardAvailability(board[6])) {
			board[6] = 'X';
			control = 0;
		}
		else if (move == board[7] && checkBoardAvailability(board[7])) {
			board[7] = 'X';
			control = 0;
		}
		else if (move == board[8] && checkBoardAvailability(board[8])) {
			board[8] = 'X';
			control = 0;
		}
		else {
			cout << "Invalid move. Please enter valid number on the board." << endl;
		}
	}

	// Display updated board after Player1 Move
	printBoard();
	cout << endl;
}

void getMovePlayer2() {

	char move = ' ';

	int control = 1;

	while (control) {

		cout << "Player 2 (O) - Please enter next move on board (1-9): \n";
		cin >> move;
		cout << endl;

		if (move == board[0] && checkBoardAvailability(board[0])) {
			board[0] = 'O';
			control = 0;
		}
		else if (move == board[1] && checkBoardAvailability(board[1])) {
			board[1] = 'O';
			control = 0;
		}
		else if (move == board[2] && checkBoardAvailability(board[2])) {
			board[2] = 'O';
			control = 0;
		}
		else if (move == board[3] && checkBoardAvailability(board[3])) {
			board[3] = 'O';
			control = 0;
		}
		else if (move == board[4] && checkBoardAvailability(board[4])) {
			board[4] = 'O';
			control = 0;
		}
		else if (move == board[5] && checkBoardAvailability(board[5])) {
			board[5] = 'O';
			control = 0;
		}
		else if (move == board[6] && checkBoardAvailability(board[6])) {
			board[6] = 'O';
			control = 0;
		}
		else if (move == board[7] && checkBoardAvailability(board[7])) {
			board[7] = 'O';
			control = 0;
		}
		else if (move == board[8] && checkBoardAvailability(board[8])) {
			board[8] = 'O';
			control = 0;
		}
		else {
			cout << "Invalid move. Please enter valid number on the board." << endl;
		}
	}

	// Display updated board after Player2 Move
	printBoard();
	cout << endl;
}

int checkBoardAvailability(char position) {

	if (position == 'X' || position == 'O') {
		return 0;
	}
	else {
		return 1;
	}
}

bool checkWinnerPlayer1() {

	if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {
		return true;
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
		return true;
	}
	else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
		return true;
	}
	else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {
		return true;
	}
	else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
		return true;
	}
	else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {
		return true;
	}
	else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
		return true;
	}
	else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
		return true;
	}
	else {
		return false;
	}
}

bool checkWinnerPlayer2() {

	if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
		return true;
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
		return true;
	}
	else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
		return true;
	}
	else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
		return true;
	}
	else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
		return true;
	}
	else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
		return true;
	}
	else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
		return true;
	}
	else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
		return true;
	}
	else {
		return false;
	}
}

//bool checkDraw() {

//}

void playGame() {

	printBoard();

	int counter = 0;

	while (true) {

		getMovePlayer1();
		counter++;
		if (checkWinnerPlayer1()) {
			cout << "CONGRATULATIONS! PLAYER 1 WINS!!!!" << endl;
			break;
		}
		// Draw if max number of moves have been played
		if (counter == 9) {
			cout << "GAME OVER! THE GAME IS A DRAW!" << endl;
			break;
		}

		getMovePlayer2();
		counter++;
		if (checkWinnerPlayer2()) {
			cout << "CONGRATULATIONS! PLAYER 2 WINS!!!!" << endl;
			break;
		}
		// Draw if max number of moves have been played
		if (counter == 9) {
			cout << "GAME OVER! THE GAME IS A DRAW!" << endl;
			break;
		}
	}
}