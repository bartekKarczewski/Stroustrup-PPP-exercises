/*Chapter 4 ** excercise 7:
     Modify program from exercise 5 so that it accepts only single digits or spelled digits*/

#include "../std_lib_facilities.h"
#include <iostream>

void calculate(int val1, int val2, char operation){
    int result{0};
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


int get_number(){
    vector<string> spelled_nums {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const int not_a_digit = spelled_nums.size();
    int val{not_a_digit};
    if(cin>>val) return val;
    cin.clear();
    string s_val;
    cin>> s_val;
    for(int i = 0; i < spelled_nums.size(); ++i){
        if(spelled_nums[i] == s_val) val = i;
    }
    if(val == not_a_digit) error("this is not digit or spelled digit: ", s_val);
    return val;
}

void init(){
    char operation;
    cout << "**This is simple calculator**" << endl;
    cout << "Enter two digits or spelled digits and operation you wish to do" << endl;
    cout << "Example: 4 12 *(each separated with space)" << endl;
    cout << ">>";
    int val1 = get_number();
    int val2 = get_number();
    cin >> operation;
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