/*Build a simple console-based Tic-Tac-Toe game that
allows two players to play against each other

TASK 3

TIC-TAC-TOE GAME

Game Board: Create a 3x3 grid as the game board.
Players: Assign
"X"
and "O" to two players.

Display Board: Show the current state of the board.
Player Input: Prompt the current player to enter their move.
Update Board: Update the game board with the player
'
s move.

Check for Win: Check if the current player has won.
Check for Draw: Determine if the game is a draw.
Switch Players: Alternate turns between
"X"
and "O"

players.

Display Result: Show the result of the game (win, draw, or ongoing).
Play Again: Ask if the players want to play another game.*/
#include <iostream>
using namespace std;

void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard(char board[3][3]) {
    cout << "   1   2   3" << endl;
    cout << "  --- --- ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << "| " << board[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "  --- --- ---" << endl;
    }
}

bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3];
    char currentPlayer = 'X';
    bool gameover = false;

    initializeBoard(board);

    while (!gameover) {
        displayBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameover = true;
        } else if (checkDraw(board)) {
            displayBoard(board);
            cout << "It's a draw!" << endl;
            gameover = true;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    char playAgain;
    cout << "Play again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y') {
        initializeBoard(board);
        gameover = false;
        currentPlayer = 'X';
    }

    return 0;
}
