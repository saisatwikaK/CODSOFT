#include<iostream>
using namespace std;
void DisplayBoard();
void move(int);
bool CheckWin();
bool CheckDraw();
void ResetBoard();
char board[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}};
char player='x';
void DisplayBoard()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<board[i][j]<<" ";
            if(j<2)
                cout<<"|";
        }
        cout<<endl;
        if(i<2)
            cout<<"---|---|---"<<endl;

    }
}
void move( int place)
{
    int row=(place-1)/3;
    int col=(place-1)%3;
    board[row][col]=player;
}
bool CheckWin()
{
      for(int i=0;i<3;i++)
    {
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
            return true;
    }
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
            return true;
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player)
        return true;

    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
        return true;

    return false;

}
bool CheckDraw()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]!='x' && board[i][j]!='o')
                return false;
        }
    }
    return true;
}
void ResetBoard()
{
    char ch = '1';

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ch;
            ch++;
        }
    }

    player = 'x';
}
int main()
{
    char choice;

    cout<<"WELCOME TO TIC-TAC-TOE MATCH"<<endl;

    do
    {
        ResetBoard();

        int place;

        while(true)
        {
            DisplayBoard();

            cout<<player<<" enter the position to mark (1-9): ";
            cin>>place;

            int row=(place-1)/3;
            int col=(place-1)%3;

            if(place>9 || place<1 || board[row][col]=='x' || board[row][col]=='o')
            {
                cout<<"Invalid Move!"<<endl;
                cout<<"Try Again!!"<<endl;
                continue;
            }

            move(place);

            if(CheckWin())
            {
                DisplayBoard();
                cout<<player<<" wins!"<<endl;
                break;
            }

            if(CheckDraw())
            {
                DisplayBoard();
                cout<<"Match Draw!"<<endl;
                break;
            }

            if(player=='x')
            {
                player='o';
            }
            else
            {
                player='x';
            }
        }

        cout<<"\nDo you want to play again? (Y/N): ";
        cin>>choice;

    } while(choice=='Y' || choice=='y');

    cout<<"\nThank you for playing!"<<endl;

    return 0;
}
