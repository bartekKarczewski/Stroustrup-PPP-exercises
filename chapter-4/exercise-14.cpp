/*Chapter 4 ** excercise 14:
     Program searches for primes in range of 1-n with use of Sieve of Eratosthenes */

#include "../std_lib_facilities.h"
#include <iostream>

void init(){
    int arr_size{0};
    cout << "Enter max value of range: ";
    cin >> arr_size;

    bool prime[arr_size];
    for(int i = 0; i < arr_size; i ++){
        prime[i] = true;
    }
 
    for(int p = 2; p * p <= arr_size; p++){
        if(prime[p] == true){
            for(int i = p * p; i <= arr_size; i += p){
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= arr_size; p++)
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