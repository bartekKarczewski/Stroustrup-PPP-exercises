/*Chapter 3 ** excercise 1:
    Program recives two integers and returns their comparision and some operations made on them(multiplication, division, proportion) */

#include "../std_lib_facilities.h"
#include <iostream>

void comparition(int val1, int val2){
    if(val1 == val2) cout << "Integers are eqal\n";
    if(val1 > val2) cout << val1 << " is bigger than " << val2 << "\n";
    if(val1 < val2) cout << val2 << " is bigger than " << val1 << "\n";

}

int sum(int val1, int val2){
    return val1 + val2;
}

int subtract(int val1, int val2){
    return val1 - val2;
}

int multiply(int val1, int val2){
    return val1 * val2;
}

void proportion(int val1, int val2){
    if(val1 == 0) error("Cant divide by 0");
    cout << val2 << " is " << (val2 * 1.0)/val1 << " of " << val1 << "\n";
}

void init(){
    int val1{0};
    int val2{0};
    cout <<"Give me two integers: ";
    cin >> val1 >> val2;
    comparition(val1, val2);
    cout << "Sum is: " << sum(val1, val2) << "\n";
    cout << "Difference is: " << subtract(val1,val2) << "\n";
    cout << val1 << " times " << val2 << " equals: " << multiply(val1, val2) << "\n";
    proportion(val1, val2);
}

int main()
    try{
        init();
        return 0;
    }
    catch(exception& e){
        cout << e.what() << endl;
        return 1;
    }