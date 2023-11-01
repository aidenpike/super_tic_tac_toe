#include <iostream>

void ttt_board(){
    char ttt_board[3][3] = {{'-', '-', '-'},
                            {'-', '-', '-'},
                            {'-', '-', '-'}};

    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            std::cout << "[" << ttt_board[x][y] << "]";
        }
        std::cout << "\n";
    }
}

int main() {
    int player_turn = 1;
    char player_letters[2] = {'X', 'O'};
    char super_ttt_board[3][3] = {{}}; //This is the super board's positions for X's and O's
    int board_row;
    int board_column;
    int sboard_row;
    int sboard_column;

    ttt_board();
    return 0;
}