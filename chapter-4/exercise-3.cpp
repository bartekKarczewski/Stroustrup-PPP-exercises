/*Chapter 4 ** excercise 3:
    Read a sequence of doubles into a vector. Think of each value as the distance between two cities along a given route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities. */

#include "../std_lib_facilities.h"
#include <iostream>

void summart(vector<double> distances){
    sort(distances.begin(), distances.end());
    double sum{0};
    for(auto distance: distances){
        sum += distance;
    }
}

void init(){
    vector<double> distances;
    double temp{0};
    cout << "Enter couple distance values: ";
    while(cin){
        cin>> temp;
        distances.push_back(temp);
    }
    summary(distances);
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