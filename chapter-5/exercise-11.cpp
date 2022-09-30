/*Chapter 5 ** excercise 11:
    Program writes n number of values from fibonacci sequence in ascending order. Also displays highest value in fibonacci sequence that can be held by int type*/

#include "../std_lib_facilities.h"
#include <iostream>

void fill_fibonacci(int size){
    vector<int> fibonacci{1,1};
    int temp;
    for(int i = 2; i < size; i++){
        temp = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(temp);
    }
    for(auto item: fibonacci){
        cout << item << " | ";
    }
}

void biggest_int_fibonacci(){
    vector<int> fibonacci {1,1};
    int temp;
    while(fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2] > fibonacci[fibonacci.size() - 1]) {
        fibonacci.push_back(fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2]);
    }
    cout << "Biggest fibonacci: " << fibonacci[fibonacci.size() - 1] << endl;
}

void init(){
    int size;
    cout << "Enter number of elements from Fibonacci sequence you want: ";
    cin >> size;
    fill_fibonacci(size);
    biggest_int_fibonacci();

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