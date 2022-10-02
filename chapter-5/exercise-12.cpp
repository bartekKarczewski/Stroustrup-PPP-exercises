/*Chapter 5 ** excercise 12:
    Game of bulls and cows. Program holds vector of 4 digits. In order to win a game user needs to guess all digits and its correct position. 
    For correct digit at wrong position player gets one COW.
    For correct digit at correct position player gets one BULL.
    Game ends with getting four BULLS.
    Input shorter than 4 digits is padded with 0s by default, for ex. input -> 87 is processed as 0087
    
    Errors with bad input still needs improving*/

#include "../std_lib_facilities.h"
#include <iostream>

void play_game(const vector<int> &bulls_cows, const vector<int> &users_choice, bool &game_on){
    int bulls{0};
    int cows{0};
    for(int i = 0; i < bulls_cows.size(); i++){
        for(int j = 0; j < users_choice.size(); j++){
            if(bulls_cows[i] == users_choice[j]){
                if(i == j){
                    bulls++;    
                }
                else {
                    cows++;  
                }
            }
        }
    }
    cout << "Bulls: " << bulls << endl;
    cout << "Cows: " << cows << endl;
    if(bulls == 4){
        game_on = false;
    }
    
}
vector<int> num_to_vec(int num){
    vector<int> users_choice(4,0);
    users_choice[0] = num/1000 % 10;
    users_choice[1] = num/100 % 10;
    users_choice[2] = num/10 % 10;
    users_choice[3] = num % 10;
    return users_choice;
}

void init(){
    cout <<"==WELCOME TO GAME OF BULLS AND COWS==" << endl;
    cout << "Your task is to guess four digit number chosen by computer." << endl;
    cout << "Correct digit at wrong position = 1 cow." << endl;
    cout << "Correct digit at correct position = 1 bull." << endl;
    cout << "You get 4 bulls you win..." << endl;
    vector<int> bulls_cows {4,5,8,7};
    vector<int> users_choice;
    bool game_on = true;
    int num;
    while(game_on){
        cout <<"Enter your guess: ";
        cin >> num;
        if(cin.fail()) {
            cout <<"Wrong input!" << endl;
            cin.clear();
        }
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        users_choice = num_to_vec(num);
        play_game(bulls_cows, users_choice, game_on);
    }
    cout << "You guessed right! You won!" << endl;

}

int main(){
    try{
        init();
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        keep_window_open("x");
    }

    return 0;
}