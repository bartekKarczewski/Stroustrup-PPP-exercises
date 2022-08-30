/*Chapter 4 ** excercise 8:
     Program calculates amout of grains of rice for each sqare of chess board if every next square doubles amount of previous*/

#include "../std_lib_facilities.h"
#include <iostream>
#include <cmath>

void init(){
    int squares = 0;
    int treshold = 0; 
    double grains  = 0;
    int exponent = 0;
    cout << "Choose amount of grains: ";
    cin >> treshold;


    while(grains < treshold){
        grains = pow(2, exponent);
        exponent++;
        squares++;
    }
    cout << "For " << grains << " you would need " << squares << " squares" << endl;

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