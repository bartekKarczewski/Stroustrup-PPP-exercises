/*Chapter 4 ** excercise 6:
     Program converts digits(0-9) to words and words into digits*/

#include "../std_lib_facilities.h"
#include <iostream>
#include <algorithm>


void digit_to_word(vector<int> digits, vector<string> words){
    int digit{0};
    cout << "What digit would you like to convert: ";
    cin >> digit;
    if(digit >= 0 && digit < 10) cout << digit << " is " << words[digit] << endl;
    else cout << "Wrong input" << endl;
}
void word_to_digit(vector<int> digits, vector<string> words){
    string word;
    cout << "What word would you like to convert: ";
    cin >> word;
    auto it = std::find(words.begin(), words.end(), word);
    if(it != words.end()){
        int index = it - words.begin();
        cout << word << " is " << digits[index] << endl;
    }
    else {
        cout << "Wrong input" << endl;
    }
    
}

void init(){
    vector<int> digits {0,1,2,3,4,5,6,7,8,9};
    vector<string> words {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char choice;
    cout << "What would you like to do: " << endl;
    cout << "d - convert digit to word" << endl;
    cout << "w - convert word to digit" << endl;
    cout << "Choice: ";
    cin >> choice;
    switch(choice){
        case 'd':
            digit_to_word(digits, words);
        break;
        case 'w':
            word_to_digit(digits, words);
        break;
        default:
            cout << "Invalid option." << endl;
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