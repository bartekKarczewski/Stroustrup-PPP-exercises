/*Chapter 3 ** excercise 1:
    Program recives bunch of temperatures and return median from vector */

#include "../std_lib_facilities.h"
#include <iostream>

int main(){
    vector<double> temps;
    double temp;
    cout << "Enter bunch of temperature values: ";
    while(cin >> temp){
        temps.push_back(temp);
    }
    sort(temps.begin(), temps.end());


    return 0;
}
