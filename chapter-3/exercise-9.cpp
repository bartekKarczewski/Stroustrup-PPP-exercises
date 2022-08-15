/*Chapter 3 ** excercise 1:
    Program checks if given integer is even */

#include "../std_lib_facilities.h"
#include <iostream>


void from_str_to_num(string s){
    if(s == "zero"){
        cout << "Value is " << 0 << endl;
    }
    else if(s =="one"){
        cout << "Value is " << 1 << endl;
    }
    else if(s =="two"){
        cout << "Value is " << 2 << endl;
    }
    else if(s =="three"){
        cout << "Value is " << 3 << endl;
    }
    else if(s =="four"){
        cout << "Value is " << 4 << endl;
    }
    else if(s =="x"){
        exit(1);
    }
    else {
        cout << "Unknown number\n";
    }
}

void init(){
    string verb_num;
    cout << "Choose 'x' if you want to quit\n";
    while(cin){
        cout << "Type in verbally number from 0 to 4: ";
        cin >> verb_num;
        from_str_to_num(verb_num);
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