/*Chapter 5 ** excercise 8:
    Modify program from exercise 8 so that it works with double type. Add vector that will contain differences between adjacent elements of numbers in collection*/

#include "../std_lib_facilities.h"
#include <iostream>

void init();

void calc_diffs(const vector<double> &values){
    vector<double> differences;
    double temp;
    for(int i = 0; i < values.size(); i++){
        if(values[i] != values.back()){
            temp = abs(values[i] - values[i + 1]);
            differences.push_back(temp);
        }
    }
    for(auto item: differences){
        cout << item << " | ";
    }
}

void sum_up(int size, vector<double> values){
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
    vector<double> values;
    int size;
    double temp;
    cout << "How many numbers you wish to sum up: ";
    cin >> size;
    if(size < 1) error("Cannot sum up less than one value");
    cout << "Enter couple numbers to collection(terminate with '|'): ";
    while(cin >> temp){
        values.push_back(temp);
    }
    sum_up(size, values);
    calc_diffs(values);
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