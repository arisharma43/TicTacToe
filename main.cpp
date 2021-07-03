#include <iostream>

using namespace std;

int main()
{
    char board[3][3] = {{'#','#', '#'},{'#','#', '#'},{'#','#', '#'}};
    char player = 'X';
    char winner = '#';
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
            cout << "Invalid move" << endl;
            continue;
        }
        bool ended=false;
        for(int i=0;i<3;i++){
            if(board[i][0]==player && board[i][1]==player&&board[i][2]==player){
                ended=true;
                winner=player;
                break;
            }
        }
        if(ended){
            break;
        }
        for(int i=0;i<3;i++){
            if(board[0][i]==player && board[1][i]==player&&board[2][i]==player){
                ended=true;
                winner=player;
                break;
            }
        }
        if(ended){
            break;
        }
        if(board[0][0]==player && board[1][1]==player&&board[2][2]==player){
            winner=player;
            break;
        }
        if(board[0][0]==player && board[1][1]==player&&board[2][2]==player){
            winner=player;
            break;
        }
        if(board[0][2]==player && board[1][1]==player&&board[2][0]==player){
            winner=player;
            break;
        }
        if(player=='X')
            player='O';
        else
            player='X';
        system("cls");
    }
    if(winner=='X')
        cout<<"Player X has won"<<endl;
    else if(winner =='O')
        cout<<"Player O has won"<<endl;
    else
        cout<<"It's a draw"<<endl;
    return 0;
}
