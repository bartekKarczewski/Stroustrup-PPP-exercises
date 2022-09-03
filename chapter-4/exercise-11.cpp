/*Chapter 4 ** excercise 11:
     Program finds all prime numbers in range of 1-100*/

#include "../std_lib_facilities.h"
#include <iostream>

bool is_prime(int num, vector<int> primes){
    bool result = true;
    for(auto item: primes){
        if(num % item == 0) result = false; 
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
    for(int i = 6; i < 100; ++i){
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