/*Chapter 4 ** excercise 10:
     Game of rock, paper, scissors*/

#include "../std_lib_facilities.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

void game_round(char player_choice, char computer_choice, int &player_score, int &computer_score){
    switch(player_choice){
        case 'r':
            if(computer_choice == 'p') {
                cout << "Computer chose paper, you lost" << endl;
                computer_score++;
                }
            else if(computer_choice == 's'){
                cout << "Computer chose scissors, you won" << endl;
                player_score++;
            }
            else {
                cout << "Computer chose rock, its a draw!" << endl;
            }
            break;
        case 'p':
            if(computer_choice == 'r') {
                cout << "Computer chose rock, you won" << endl;
                player_score++;
                }
            else if(computer_choice == 's'){
                cout << "Computer chose scissors, you lost" << endl;
                computer_score++;
            }
            else {
                cout << "Computer chose paper, its a draw!" << endl;
            }
            break;
        case 's':
            if(computer_choice == 'r') {
                cout << "Computer chose rock, you lost" << endl;
                computer_score++;
                }
            else if(computer_choice == 'p'){
                cout << "Computer chose paper, you won" << endl;
                player_score++;
            }
            else {
                cout << "Computer chose scissors, its a draw!" << endl;
            }
            break;
            default: 
                cout << "Unknow option, try again..." << endl;
    }
}

char random_choice(vector<char> computer_choices){
    char computer_choice;
    srand(time(NULL));
    int index = rand() % computer_choices.size();
    computer_choice = computer_choices[index];
    return computer_choice;
}

void init(){
    vector<char> computer_choices {'r', 'p', 's'};
    char player_choice;
    int player_score = 0;
    int computer_score = 0;
    cout << "######## Game of rock, paper, scissors #############" << endl;
    while(player_score != 3 && computer_score != 3){
        cout << "Choose rock, paper or scissors(r, p, s): ";
        cin >> player_choice;
        char computer_choice = random_choice(computer_choices);
        game_round(player_choice, computer_choice, player_score, computer_score);
    }
    if(player_score == 3) cout << "Congrats, you won the game!" << endl;
    if(computer_score == 3) cout << "Sorry, maybe next time ; /" << endl;


}

int main()
    try{
        init();

    return 0;
}
catch(runtime_error e){
    cout << e.what() << endl;
    keep_window_open("x");
}