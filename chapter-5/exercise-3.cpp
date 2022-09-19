/*Chapter 5 ** excercise 3:
    Fix logical error in previous program, temperature cannot be below -273.15 Celcius. Write some test in main to report errors*/

#include "../std_lib_facilities.h"
#include <iostream>

double ctok(double c){
    double k = c + 273.15; 
    return k; 
}


int main(){
    double c = 0;
    while(cin >> c){
        //TEST
        if(c < -273.15){
            cerr <<"Wrong argument passed. Temperature does not go below -273.15 Celsius. Try again: " << endl;
        }
        else break;
    }
    double k = ctok(c); 
    cout << k << endl; 

    return 0;
}