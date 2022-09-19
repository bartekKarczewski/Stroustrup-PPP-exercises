/*Chapter 5 ** excercise 4:
    Solve exercise 3 but this time test arguments inside ctok function*/

#include "../std_lib_facilities.h"
#include <iostream>

double ctok(double c){
    if(c < -273.15) error("Wrong argument, temperature below absolute zero!");
    double k = c + 273.15; 
    return k; 
}


int main(){
    try{
        double c = 0;
        cin >> c;
        double k = ctok(c); 
        cout << k << endl; 
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
        keep_window_open("x");
    }

    return 0;
}