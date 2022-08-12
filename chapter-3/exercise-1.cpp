/*Chapter 3 ** excercise 1:
    Programm converting miles to kilometeres */

#include "../std_lib_facilities.h"
#include <iostream>


double calculate_km(double miles){
    const double mil_to_km_ratio = 1.609;
    double result{0};
    result = miles * mil_to_km_ratio;
    return result;
}

void init(){
    cout <<"**Welcome to miles to  kilometers converter**\n";
    cout << "If you want to quit type any character\n";
    double miles{0};
    while(cin){
        cout << "Type number of miles: ";
        cin >> miles;
        if(miles < 0){
            cout <<"Error: negative value typed\n";
        }
        if(miles > 0) cout << "Its "<< calculate_km(miles) << " kilometers :)" << endl;

    }
}

int main(){
    init();
    return 0;
}