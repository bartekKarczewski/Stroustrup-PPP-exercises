/*Chapter 4 ** excercise 17
     Program searches for smallest value, largest value and mode among strings */

#include "../std_lib_facilities.h"
#include <iostream>
#include <algorithm>

void count(vector<string> words){
    sort(words.begin(), words.end());
    int count{1};
    int current_count{1};
    string mode;
    for(auto word: words){
        current_count = std::count(words.begin(), words.end(), word);
        if(current_count > count){
            count = current_count;
            mode = word;
            current_count = 1;
        }
    }
    cout << "Largest value: " << words.back() << endl;
    cout << "Smallest value: " << words.front() << endl;
    cout << "Mode: " << mode << " appears " << count << " times." << endl;
}


void init(){
    vector<string> words;
    string temp;
    cout << "Enter couple words separated by space, end with '|': ";
    while(cin >> temp){
        if(temp != "|"){
            words.push_back(temp);
        }
        else break;
    }
    count(words);
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