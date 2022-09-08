/*Chapter 4 ** excercise 13:
     Program searches for primes in range of 1-100 with use of Sieve of Eratosthenes */

#include "../std_lib_facilities.h"
#include <iostream>

void init(){
    bool prime[100];
    for(int i = 0; i < 100; i ++){
        prime[i] = true;
    }
 
    for(int p = 2; p * p <= 100; p++){
        if(prime[p] == true){
            for(int i = p * p; i <= 100; i += p){
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= 100; p++)
        if (prime[p])
            cout << p << " ";
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