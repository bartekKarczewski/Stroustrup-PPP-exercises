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
    if(temps.size() % 2 != 0) cout << "Median is: " << temps[temps.size()/2] << endl;
    else cout << "Median is: " <<  (temps[temps.size()/2] + temps[(temps.size()/2) - 1])/2 << endl;


    return 0;
}
