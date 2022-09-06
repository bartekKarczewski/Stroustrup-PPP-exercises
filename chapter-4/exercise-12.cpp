/*Chapter 4 ** excercise 12:
     Modify program from ex 11 so that it accepts max value to which it would find primes*/

#include "../std_lib_facilities.h"
#include <iostream>

bool is_prime(int num, vector<int> primes){
    bool result = true;
    for(auto prime: primes){
        if(num % prime == 0) result = false; 
    }
    return result;
}

void display(vector<int> primes){
    for(auto prime: primes) {
        cout << prime << endl;
    }
}

void init(){
    vector<int> primes {2,3,5};
    int max{0};
    cout << "Max value of range: ";
    cin >> max;
    while(max < 0){
        cout << "Value must be positive. Try again:  ";
        cin >> max;
    }
    for(int i = 6; i < max; ++i){
        bool result = is_prime(i, primes);
        if(result){
            primes.push_back(i);
        }
    }
    display(primes);
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