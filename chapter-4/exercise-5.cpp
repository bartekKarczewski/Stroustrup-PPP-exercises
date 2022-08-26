/*Chapter 4 ** excercise 5:
     Simple calculator executing add, subtract, multiply, divide*/

#include "../std_lib_facilities.h"
#include <iostream>

void calculate(double val1, double val2, char operation){
    double result{0};
    switch(operation){
        case '+':
            cout << "Sum of " << val1 << " and " << val2 << " is -> " << (val1 + val2) << endl;
            break;
        case '-':
            cout << "Difference of " << val1 << " and " << val2 << " is -> " << (val1 - val2) << endl;
            break;
        case '*':
            cout << "Multiplication of " << val1 << " and " << val2 << " is -> " << (val1 * val2) << endl;
            break;
        case '/':
            if(val2 != 0){
                cout << "Division of " << val1 << " and " << val2 << " is -> " << (val1 / val2) << endl;
            }
            else cout << "Can't divide by 0!" << endl;
            break;
        default:
            cout << "Unknown operation" << endl;

    }
}

void init(){
    double val1{0};
    double val2{0};
    char operation;
    cout << "**This is simple calculator**" << endl;
    cout << "Enter two values and operation you wish to do" << endl;
    cout << "Example: 0.4 2.5 *(each separated with space)" << endl;
    cout << ">>";
    cin >> val1 >> val2 >> operation;
    calculate(val1, val2, operation);
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