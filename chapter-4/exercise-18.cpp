/*Chapter 4 ** excercise 18:
     Program solves quadratic equation */

#include "../std_lib_facilities.h"
#include <iostream>

double calc_delta(double a, double b, double c){
    double delta = pow(b, 2) - 4 * a * c;
    return delta;
}

void quadratic_equation(double delta, double a, double b, double c){
    if(delta > 0){
        double x1 = (-b - sqrt(delta))/(2 * a);
        double x2 = (-b + sqrt(delta))/(2 * a);
        cout << "Solutions are: " << x1 << " and " << x2 << endl;
    }
    else if(delta == 0){
        double x = (-b)/(2 * a);
        cout << "Solution is: " << x << endl;
    }
    else {
        cout << "Equation has no solutions" << endl;
    }
}

void init(){
    double a;
    double b;
    double c;
    cout << "Enter three values for equation, separated by space: ";
    cin >> a >> b >> c;
    double delta = calc_delta(a,b,c);
    quadratic_equation(delta, a, b, c);
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