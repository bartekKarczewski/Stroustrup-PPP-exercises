/*Chapter 4 ** excercise 15:
     Program displays n number of primes in ascending order */

#include "../std_lib_facilities.h"
#include <iostream>

void display(vector<int> primes){
    for(auto item: primes){
        cout << item << " ";
    }
}

void get_primes(int amount, vector<int> &primes){
    for(int i = 3; primes.size() < amount; i++){
        bool is_prime = true;
        for(auto prime: primes){
            if(i % prime == 0) is_prime = false;
        }
        if(is_prime) primes.push_back(i);
    }
}

void init(){
    vector<int> primes{2};
    int amount{0};
    cout << "How many primes: ";
    cin >> amount;
    get_primes(amount, primes);
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