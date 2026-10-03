#include<iostream>
using namespace std;

int main(){
     char again;
    start:
     string board[3][3] = {     //initial board slots represented by numbers
        {" 1 "," 2 "," 3 "},
        {" 4 "," 5 "," 6 "},
        {" 7 "," 8 "," 9 "}
        };
         for(int j=0;j<3;j++){      //print board every time
            for(int k= 0;k<3;k++){
               cout<<board[j][k];
           }
           cout<<"\n";
        }
        int value;
        int n=9;
         string symbol =" O ";
        int turn=0;
         for(int i=0;i<n;i++){
            cout<<"player "<<symbol<<" turn:";
            cin>>value;
            if(board[(value-1)/3][(value-1)%3]==" X "|| board[(value-1)/3][(value-1)%3]==" O "){      //Blocks the another input
            cout << "\033[2J\033[1;1H\n";
            cout<<"Already Occupied! Try Another.\n";
            n++;
        }
        else{
        cout << "\033[2J\033[1;1H\n";
        board[(value-1)/3][(value-1)%3] = symbol;                         //place the input
        turn++;
        }
            for(int j=0;j<3;j++){            // shows board after each input
               for(int k= 0;k<3;k++){
                cout<<board[j][k];
               }
               cout<<"\n";

        }
        //checks the wining
        if((board[0][0] == " O " && board[0][0] == board[0][1] && board[0][1] == board[0][2]) ||
        (board[1][0] == " O " && board[1][0] == board[1][1] && board[1][1] == board[1][2]) ||
        (board[2][0] == " O " && board[2][0] == board[2][1] && board[2][1] == board[2][2]) ||
        (board[0][0] == " O " && board[0][0] == board[1][0] && board[1][0] == board[2][0]) ||
        (board[0][1] == " O " && board[0][1] == board[1][1] && board[1][1] == board[2][1]) ||
        (board[0][2] == " O " && board[0][2] == board[1][2] && board[1][2] == board[2][2]) ||
        (board[0][0] == " O " && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == " O " && board[0][2] == board[1][1] && board[1][1] == board[2][0])){
               cout<<"\n"<<char(7)<<"Player O Wins!\n\n\n";
               cout<<"Wanna play again?(y/n):";                    //restart OR end the game as per player wish
               cin>>again;
               if(again == 'y' || again == 'Y'){
                cout << "\033[2J\033[1;1H\n";
                goto start;
               }
               else{
                return 0;
               }
        }
        else if((board[0][0] == " X " && board[0][0] == board[0][1] && board[0][1] == board[0][2]) ||
        (board[1][0] == " X" && board[1][0] == board[1][1] && board[1][1] == board[1][2]) ||
        (board[2][0] == " X " && board[2][0] == board[2][1] && board[2][1] == board[2][2]) ||
        (board[0][0] == " X " && board[0][0] == board[1][0] && board[1][0] == board[2][0]) ||
        (board[0][1] == " X " && board[0][1] == board[1][1] && board[1][1] == board[2][1]) ||
        (board[0][2] == " X " && board[0][2] == board[1][2] && board[1][2] == board[2][2]) ||
        (board[0][0] == " X " && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == " X " && board[0][2] == board[1][1] && board[1][1] == board[2][0])){
            cout<<"\n"<<char(7)<<"Player X Wins!\n\n\n";
            cout<<"Wanna play again?(y/n):";
               cin>>again;
               if(again == 'y' || again == 'Y'){
                cout << "\033[2J\033[1;1H\n";
                goto start;
               }
               else{
                return 0;
               }
        }
        //changes the turn of players
        if(turn%2==0){
        symbol =" O ";
        }
        else{
        symbol = " X ";
        }

    }
    cout<<char(7)<<"\nIts a Draw!\n\n\n";
    cout<<"Wanna play again?(y/n):";
               cin>>again;
               if(again == 'y' || again == 'Y'){
                cout << "\033[2J\033[1;1H\n";
                goto start;
               }
               else{
                return 0;
               }
}
