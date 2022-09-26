/*Chapter 5 ** excercise 7:
    Program checks if delta is positive or negative and by that answers if equation with given values has solution*/

#include "../std_lib_facilities.h"
#include <iostream>

bool calc_delta(double a, double b, double c){
    double delta = pow(b,2) - 4 * (a * c);
    if(delta < 0) return false;
    else return true;
}

void init(){
    double a,b,c;
    cout <<"Enter values for quadratic equation: ";
    cin >> a >> b >> c;
    bool result = calc_delta(a, b, c);
    if(result){
        cout << "Equation has solution(s)" << endl;
    }
    else {
        cout << "Equation has NO solution" << endl;
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