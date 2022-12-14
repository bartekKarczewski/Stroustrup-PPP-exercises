/*Chapter 3 ** excercise 1:
    Program recives 3 strings and sort them in ascending(alphabetical) order*/

#include "../std_lib_facilities.h"
#include <iostream>

void init(){
    vector<string> strings {"Steinbeck", "Hemingway", "Fitzgerald", "Conrad"};
    cout << "We have following strings: ";
    for(auto name: strings){
        cout << name << ", ";
    }
    cout << "\n";
    sort(strings.begin(), strings.end());
    cout << "-------------------------" << endl;
    cout << "Sorted strings: ";
    for(auto name: strings){
        cout << name << ", ";
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