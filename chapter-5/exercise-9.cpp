/*Chapter 5 ** excercise 8:
    Modify program from exercise 6 so that it reports error when result cannot be saved as integer*/

#include "../std_lib_facilities.h"
#include <iostream>

int ctof(double temp){
    double result = 9.0/5*temp + 32;
    if(result != std::floor(result)) error("Result cannot be represented with integer");
    return result;
}

int ftoc(double temp){
    double result = 5/9.0*(temp - 32);
    if(result != std::floor(result)) error("Result cannot be represented with integer");
    return result;
}

void init(){
    double temp;
    char unit;
    int result;
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