/*Chapter 4 ** excercise 21:
     PModify program from ex 20 so that it receives age and returns connected name or null */

#include "../std_lib_facilities.h"
#include <iostream>

void age_search(int age, const vector<string> &names, const vector<int> &ages){
    int i = 0;
    while (i < names.size()){
        if(age == ages[i]) {
            cout << names[i] << " -> " << ages[i] << endl;
            return;
        }
        i++;
    }
    cout << "Age not found!" << endl;
}

void name_search(string name, const vector<string> &names, const vector<int> &ages){
    int i = 0;
    while (i < names.size()){
        if(name == names[i]) {
            cout << names[i] << " -> " << ages[i] << endl;
            return;
        }
        i++;
    }
    cout << "Name not found!" << endl;
}

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
    cout << "Enter couple pairs of name and age, terminate with 'NoName 0': ";
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

    cout <<"Enter name you look for: ";
    cin >> temp_name;
    name_search(temp_name, names, ages);
    cout <<"Enter age you look for: ";
    cin >> temp_age;
    age_search(temp_age, names, ages);
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