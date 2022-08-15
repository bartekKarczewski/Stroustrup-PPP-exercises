/*Chapter 3 ** excercise 1:
    Program recives operator with two numbers and returns result */

#include "../std_lib_facilities.h"
#include <iostream>


void calculate(string operation, double val1, double val2){
    if(operation == "plus" || operation == "+"){
        cout << val1 + val2 << endl;
    }
    else if(operation == "minus" || operation == "-"){
        cout << val1 - val2 << endl;
    }
    else if(operation == "times" || operation == "*"){
        cout << val1 * val2 << endl;
    }
    else if(operation == "divide" || operation =="/"){
        if(val2 == 0) cout << "Cant divide by 0\n";
        if(val2 != 0) cout << val1 / val2 << endl;
    }
}


void init(){
    string operation;
    double val1{0};
    double val2{0};
    while(cin){
        cout << "Type in operation and two values to calculate: ";
        cin >> operation >> val1 >> val2;
        if(cin) calculate(operation, val1, val2);
        else {
            cout << "Invalid data\n";
        }
    }
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