/*Chapter 4 ** excercise 14:
     Program finds given number of primes and displays them*/

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
    vector<int> primes{2};
    int count{0};
    int num{3};
    cout << "How many primes: ";
    cin >> count;
    while(primes.size() < count){
        if(is_prime(num, primes)) primes.push_back(num);
        num += 2;
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