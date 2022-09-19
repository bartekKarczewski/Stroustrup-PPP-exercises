/*Chapter 5 ** excercise 5:
    Add conversion from Kelvin to Celsius in previous program*/

#include "../std_lib_facilities.h"
#include <iostream>

double ctok(double temp){
    if(temp < -273.15) error("Wrong argument, temperature below absolute zero!");
    double k = temp + 273.15; 
    return k; 
}

double ktoc(double temp) {
    if(temp < 0) error("Wrong argument, temperature below absolute zero!");
    double k = temp - 273.15; 
    return k; 
}

void init(){
       double temp;
       char unit;
       double result;
       cout <<"Enter temperature to convert and unit you want to receive(c/k): ";
       cin >> temp >> unit;
       switch(unit){
        case 'c':
            result = ctok(temp);
            cout << temp << " Celsius equals " << result << " Kelvin" << endl;
            break;
        case 'k':
            result = ktoc(temp);
            cout << temp << " Kelvin equals " << result << " Celsius" << endl;\
            break;
        default:
            cout << "Unknown unit." << endl;
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