/*Chapter 4 ** excercise 15:
     Program searches for mode in collection of numbers */

#include "../std_lib_facilities.h"
#include <iostream>
#include <algorithm>

void count(vector<int> collection){
    sort(collection.begin(), collection.end());
    int count{1};
    int current_count{1};
    int prev_num{collection.back()};
    int mode{collection[0]};
    for(const auto num: collection){
        if (num == prev_num) {
            ++current_count;
         if (current_count > count) {
            count = current_count;
            mode = num;
            }
        }
        else {
            current_count = 1;
        }
        prev_num = num;
        }
    cout << "Mode: " << mode << " appears " << count << " times" << endl;
}
void init(){
    vector<int> collection;
    int temp;
    cout << "Enter sequence of numbers, terminate with '|': ";
    while(cin>> temp){
        collection.push_back(temp);
    }
    count(collection);
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