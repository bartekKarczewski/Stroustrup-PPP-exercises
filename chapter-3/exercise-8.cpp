/*Chapter 3 ** excercise 1:
    Program checks if given integer is even */

#include "../std_lib_facilities.h"
#include <iostream>

void is_even(int num){
        if(num % 2 == 0) cout << num << " is even\n";
        else cout << num << " is odd\n";
}

void init(){
    cout <<"Let me check if number is even or not. (Type in any character to quit)\n";
    int num{0};
    while(cin){
        cout << "Give me integer: ";
        cin >> num;
        if(cin) is_even(num);  
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