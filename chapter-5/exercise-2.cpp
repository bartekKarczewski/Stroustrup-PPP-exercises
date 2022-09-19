/*Chapter 5 ** excercise 2:
    fix bugs in program for converting Celsius to Kelvin */

#include "../std_lib_facilities.h"
#include <iostream>

double ctok(double c){
    double k = c + 273.15; //wrong type declared, should be double not int, otherwise result would be cut without us knowing it;
    return k; //cannot return type but a value of some type;
}


int main(){
    double c = 0;
    cin >> c; //typo with variable we want to write into, not 'd' but 'c';
    double k = ctok(c); //wrong argument passed to function ctok, function accepts double type values not strings!;
    cout << k << endl; // another typo, not 'Cout' but 'cout';

    return 0;
}