#include<iostream>
using namespace std;

void game(int value,string (*pp)[3],int *p,string symbol,int *ptr);

int main(){
    char again;
    start:
        string board[3][3] = {     //initial board slots represented by numbers
        {" 1 "," 2 "," 3 "},
        {" 4 "," 5 "," 6 "},
        {" 7 "," 8 "," 9 "}
        };
        //show the intial board to players
        for(int j=0;j<3;j++){
            for(int k= 0;k<3;k++){
               cout<<board[j][k];
           }
           cout<<"\n";
        }
        int value;
        int n=9;
        int *ptr = &n;
        string symbol =" O ";
        int turn=0;
        int *p = &turn;
        string (*pp)[3] = board;
        for(int i=0;i<n;i++){
            game(value,pp,p,symbol,ptr);
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
                cout << "\033[2J\033[1;1H";
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
                cout << "\033[2J\033[1;1H";
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
                cout << "\033[2J\033[1;1H";
                goto start;
               }
               else{
                return 0;
               }
}
void game(int value,string (*pp)[3],int *p ,string symbol,int *ptr){
    cout<<"player "<<symbol<<" turn:";
     cin >> value;                                  //takes input from player
    switch(value){
    case 1:
        if(pp[0][0]==" X "|| pp[0][0]==" O "){      //Blocks the another input
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[0][0] = symbol;                         //place the input
        (*p)++;
        break;
        }
     case 2:if(pp[0][1]==" X "|| pp[0][1]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[0][1]= symbol;
        (*p)++;
        break;
        }
    case 3:
        if(pp[0][2]==" X "|| pp[0][2]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[0][2]=  symbol;
        (*p)++;
        break;
        }
    case 4:
        if(pp[1][0]==" X "|| pp[1][0]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[1][0]=  symbol;
        (*p)++;
        break;
        }
    case 5:
        if(pp[1][1]==" X "|| pp[1][1]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[1][1]= symbol;
        (*p)++;
        break;
        }
    case 6:
        if(pp[1][2]==" X "|| pp[1][2]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[1][2]= symbol;
        (*p)++;
        break;
        }
    case 7:
        if(pp[2][0]==" X "|| pp[2][0]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[2][0]= symbol;
        (*p)++;
        break;
        }
    case 8:
        if(pp[2][1]==" X "|| pp[2][1]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occupied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[2][1]= symbol;
        (*p)++;
        break;
        }
    case 9:
        if(pp[2][2]==" X "|| pp[2][2]==" O "){
            cout << "\033[2J\033[1;1H";
            cout<<"Already Occ  upied! Try Another.\n";
            (*ptr)++;
            break;
        }
        else{
        cout << "\033[2J\033[1;1H";
        pp[2][2]= symbol;
        (*p)++;
        break;
        }
    }
}
