#include <iostream>

using namespace std;

int main()
{
    char board[3][3] = {{'#','#', '#'},{'#','#', '#'},{'#','#', '#'}};
    char player = 'X';
    for(int p=0;p<9;p++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
        int row, col;
        cout << "Enter a row number (1,2, or 3): ";
        cin >> row;
        cout << "Enter a column number (1,2, or 3): ";
        cin >> col;
        if(board[row-1][col-1]=='#'){
            board[row-1][col-1]=player;
        }else{
            system("cls");
            cout << "Invalid move" << end1;
            continue;
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
