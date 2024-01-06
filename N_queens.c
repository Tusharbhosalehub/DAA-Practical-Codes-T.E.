#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<int>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(i - row) == abs(board[i] - col)) {
            return false;
        }
    }
    return true;
