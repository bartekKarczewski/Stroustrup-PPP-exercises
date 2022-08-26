/*Chapter 4 ** excercise 4:
     Program guesses chosen number by asking no more than 7 questions*/

#include "../std_lib_facilities.h"
#include <iostream>

void guessing(char &choice, int &counter, int &guess, vector<int> differences){
    counter++;
    switch(choice){
        case 'l':
            if(counter <= differences.size()) guess += differences[counter - 1];
            else if(guess < 100) ++guess;
            break;
        case 's':
            if(counter < differences.size() - 1) guess -= differences[counter - 1];
            else if(guess > 1)  --guess;
            break;
        case 'c': 
            cout << "Gotcha!" << endl;
            break;
        default:
            cout << "unknown choice" << endl;
            --counter;
    }
    if(counter == 7 && choice != 'c'){
        cout << "Don't cheat! Your number is " << guess << endl;
        exit(1);
    }
}

void init(){
    int guess = 50;
    vector<int> differences {25,13,6,3,2,1};
    int counter = 0;
    char choice = ' ';
    cout << "Choose number between 1 and 100." << endl;
    cout << "For each of my guesses tell me if number is larger, smaller or correct"<< endl;
    cout << "For that use letters 'l', 's', 'c' : ): " << endl;
    while(choice != 'c'){
        cout << "My guess is >>>>>>> " << guess << endl;
        cout << "Answer: ";
        cin >> choice;
        guessing(choice, counter, guess, differences);
   }
   
    
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