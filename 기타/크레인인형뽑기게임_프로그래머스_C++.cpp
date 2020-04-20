﻿#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;

    for (int i = 0; i < moves.size(); i++) {
        for (int j = 0; j < board[moves[i] - 1].size(); j++) {
            if (board[j][moves[i] - 1] != 0) {
                if (!st.empty() && st.top() == board[j][moves[i] - 1]) {
                    answer += 2;
                    st.pop();
                }
                else {
                    st.push(board[j][moves[i] - 1]);
                }
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }

    return answer;
}

int main() {
    vector<vector<int>> board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
    vector<int> moves = { 1,5,3,5,1,2,1,4 };

    cout << solution(board, moves);
}