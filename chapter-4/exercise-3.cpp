/*Chapter 4 ** excercise 3:
    Read a sequence of doubles into a vector. Think of each value as the distance between two cities along a given route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities. */

#include "../std_lib_facilities.h"
#include <iostream>
#include <cmath>

void adjacent(vector<double> distances){
    double smallest{abs(distances[0] - distances[1])};
    double largest{abs(distances[0] - distances[1])};

    for(int i = 1; i < distances.size(); ++i){
        if(distances[i] != distances.back()){
            double difference = abs(distances[i] - distances[i + 1]);
            if(smallest > difference) smallest = difference;
            if(largest < difference ) largest = difference; 
        }
    }
    cout << "Smallest diference between adjacent distances is: " << smallest << endl;
    cout << "Largest difference between adjacent distances is: " << largest << endl;
}

void summary(vector<double> distances){
    adjacent(distances);
    sort(distances.begin(), distances.end());
    double sum{0};
    for(auto distance: distances){
        sum += distance;
    }
    cout << "Sum of distances is: " << sum << endl;
    cout << "Smallest distance in collection is: " << distances[0] << endl;
    cout << "Largest distance in collection is: " << distances[distances.size() - 1] << endl;
    cout << "Average distance is: " << sum/distances.size() << endl;
    
}

void init(){
    vector<double> distances;
    double temp;
    cout << "Enter couple distance values: ";
    while(cin){
        cin>> temp;
        if(cin) distances.push_back(temp);
    }
    summary(distances);
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