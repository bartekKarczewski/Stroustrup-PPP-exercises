/*Chapter 3 ** excercise 1:
    Program recives 3 integers and sort them in ascending order */

#include "../std_lib_facilities.h"
#include <iostream>

void sort(vector<int> &values){
    sort(values.begin(), values.end());

    for(auto item: values){
        cout << item << ", ";
    }
    
}
void init(){
    vector<int> values;
    int val1{0};
    int val2{0};
    int val3{0};
    cout << "Give three integers to sort: ";
    cin >> val1 >> val2 >> val3;
    values = {val1, val2, val3};
    sort(values);

}

int main(){
    init();

    return 0;
}