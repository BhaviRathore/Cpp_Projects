#include <iostream>
using namespace std;

int main()
{
    char a[3][3] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    int arr[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j; char k; int c_1 = 0; int c_2 =0; int c_3 = 0; int c_4 = 0; int c_5 = 0; int c_6 = 0; int c_7 = 0; int c_8 = 0;
    int x = 0;
    string player_1, player_2;
    cout << "Welcome to tic tac toe, the world's most boring game....." << endl;
    cout << "Enter names of player 1 and player 2" << endl;
    cout << "Player 1 (x)" << endl;
    cin >> player_1 ; 						// interesting, if you use a space in the name the program breaks and goes into an infinite loop.
    cout << "player 2 (o)" << endl;
    cin >> player_2 ;
    while (x < 9)
    {
        cout << "Enter row, column, symbol (x or 0)." << endl ;
        cin >> i >> j >> k;
        if(i<=3 && j<=3)
        {

            if(a[i-1][j-1]=='-')
            {
                i--; j--;
                a[i][j] = k;
                switch(k){
                    case 'x' :
                        arr[i][j] = 5;
                        break;
                    case 'o' :
                        arr[i][j] = 7;
                        break;
                default :
                    cout << "Please enter x or o";
                }
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
            /*    for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    cout << endl;
                }
                */
             i = 0; j = 0;
            c_1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            c_2 = arr[i+1][j] + arr[i+1][j+1] + arr[i+1][j+2];
            c_3 = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            c_4 = arr[i][j] + arr[i+1][j+1] + arr[i+2][j+2];
            c_5 = arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j];
            c_6 = arr[i][j] + arr[i+1][j] + arr[1+2][j];
            c_7 = arr[i][j+1] + arr[i+1][j+1] + arr[1+2][j+1];
            c_8 = arr[i][j+2] + arr[i+1][j+2] + arr[1+2][j+2];
             // cout << c_1 << endl << c_2 << endl << c_3 << endl << c_4 << endl << c_5 << endl;
            if (c_1 == 15 || c_2 == 15 || c_3 == 15 || c_4 == 15 || c_5 == 15 || c_6 == 15 || c_7 == 15 || c_8 == 15)
            {
                cout <<  player_1 << " wins!" << endl;
                break;
            }
            if (c_1 == 21 || c_2 == 21 || c_3 == 21 || c_4 == 21 || c_5 == 21 || c_6 == 21 || c_7 == 21 || c_8 == 21)
            {
                cout << player_2 << " wins!" << endl;
                break;

            }
        }
    x++;
    }
    }
}
