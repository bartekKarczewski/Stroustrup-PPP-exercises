/*Chapter 4 ** excercise 19:
     Program searches for mode in collection of numbers */

#include "../std_lib_facilities.h"
#include <iostream>

void display(vector<string> names, vector<int> ages){
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << " | " << ages[i] << endl;
    }
}

void init(){
    vector<string> names;
    vector<int> ages;
    string temp_name;
    int temp_age;
    cout << "Enter couple pairs of name and age: ";
    while(cin >> temp_name >> temp_age){
        if(temp_name != "NoName" && temp_age != 0){
            names.push_back(temp_name);
            ages.push_back(temp_age);
            cin.clear();
        }
        else break;
    }
    for(int i = 0; i < names.size(); i++){
        for(int j = i + 1; j < names.size(); j++){
            if(names[i] == names[j]){
                error("One of names is not unique");
            }
        }
    }
    display(names, ages);
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