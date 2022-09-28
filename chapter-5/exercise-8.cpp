/*Chapter 5 ** excercise 8:
    Program receives collection of numbers and sums up n of them*/

#include "../std_lib_facilities.h"
#include <iostream>

void init();

void sum_up(int size, vector<int> values){
    if(size <= values.size()){
        int sum{0};
        for(int i = 0; i < size; i++){
            sum += values[i];
        }
        cout << "Requested sum equals: " << sum << endl;
    }
    else {
        error("Not enough elements in collection");
    }
}

void init(){
    vector<int> values;
    int size;
    int temp;
    cout << "How many numbers you wish to sum up: ";
    cin >> size;
    if(size < 1) error("Cannot sum up less than one value");
    cout << "Enter couple numbers to collection(terminate with '|'): ";
    while(cin >> temp){
        values.push_back(temp);
    }
    sum_up(size, values);
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