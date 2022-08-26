/*Chapter 4 ** excercise 5:
     Simple calculator executing add, subtract, multiply, divide*/

#include "../std_lib_facilities.h"
#include <iostream>


int main()
    try{
        init();

    return 0;
}
catch(runtime_error e){
    cout << e.what() << endl;
    keep_window_open("x");
}