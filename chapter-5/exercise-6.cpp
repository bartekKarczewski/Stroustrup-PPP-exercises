/*Chapter 5 ** excercise 6:
    Program converts Celsius to Fahrenheit and Fahrenheit to Celsius*/

#include "../std_lib_facilities.h"
#include <iostream>

double ctof(double temp){
    double result = 9.0/5*temp + 32;
    return result;
}

double ftoc(double temp){
    double result = 5/9.0*(temp - 32);
    return result;
}

void init(){
    double temp;
    char unit;
    double result;
    cout <<"Enter temperature and initial unit(c/f): ";
    cin >> temp >> unit;
    switch(unit){
        case 'c':
            result = ctof(temp);
            cout << temp << " Celsius is " << result << " Fahrenheit" << endl;
            break;
        case 'f':
            result = ftoc(temp);
            cout << temp << " Fahrenheit is " << result << " Celsius" << endl;
            break;
        default: 
            cout << "Unknown unit" << endl;
    }
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