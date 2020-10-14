#include <iostream>
#include <cstdlib>
using namespace std;
/*
Простенькая консольная игра
*/

int main() {
    int rounds;
    int counter_player_win = 0;
    int counter_computer_win = 0;
    int player_number;
    int computer_number;
    cout << "Enter count of rounds: ";
    cin >> rounds;
    for (int i = 0; i < rounds; ++i) {
        cout << "Enter you number: ";
        cin >> player_number;
        computer_number = rand()% 1000 + 1;
        if (player_number>computer_number){
            cout<< "You winning in this round!"<<" "<<"The generated number: "<<computer_number<<endl;
            counter_player_win += 1;
        }else{
            cout<< "You losing in this round!"<<" "<<"The generated number: "<<computer_number<<endl;
            counter_computer_win += 1;
        }
    }
    if (counter_computer_win>counter_player_win){
        cout<< "You lost this game."<<" "<<"Your score: "<<counter_player_win<<" "<<"Computer score: "<<counter_computer_win<<endl;
    }else{
        cout<< "You won this game."<<" "<<"Your score: "<<counter_player_win<<" "<<"Computer score: "<<counter_computer_win<<endl;
    }
    return 0;
}
