/*Chapter 5 ** excercise 14:
    Program reads pairs of weekday and number (ex. Friday 23). Each value is then stored in proper vector. Program displays values stored in vectors and sum of their values*/

#include "../std_lib_facilities.h"

int sum(const vector<int> &vals){
    int sum{0};
    for(auto val: vals){
        sum += val;
    }
    return sum;
}

void display(const vector<vector<int>> &days){
    vector<string> names {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << ": ";
        for(auto item: days[i]){
            cout << item << ", ";
        }
        cout << " || SUM: " << sum(days[i]) << endl;
    }
}

void init(){
    string day;
    int value{0};
    vector<int> mondays;
    vector<int> tuesdays;
    vector<int> wednesdays;
    vector<int> thursdays;
    vector<int> fridays;
    vector<int> saturdays;
    vector<int> sundays;

    cout << "Enter weekday/value pair. Exit with x 0: ";
    while(cin >> day >> value){
        if( day == "x" && value == 0) break;
        if(day == "mon" || day == "monday" ||  day == "Mon" || day == "Monday"){
            mondays.push_back(value);
        }
        if(day == "tue" || day == "tuesday" ||  day == "Tue" || day == "Tuesday"){
            tuesdays.push_back(value);
        }
        if(day == "wed" || day == "wednesday" ||  day == "Wed" || day == "Wednesday"){
            wednesdays.push_back(value);
        }
        if(day == "thu" || day == "thursday" ||  day == "Thu" || day == "Thursday"){
            thursdays.push_back(value);
        }
        if(day == "fri" || day == "friday" ||  day == "Fri" || day == "Friday"){
            fridays.push_back(value);
        }
        if(day == "sat" || day == "saturday" ||  day == "Sat" || day == "Saturday"){
            saturdays.push_back(value);
        }
        if(day == "sun" || day == "sunday" ||  day == "Sun" || day == "Sunday"){
            sundays.push_back(value);
        }
    }

    vector<vector<int>> days {mondays, tuesdays, wednesdays, thursdays, fridays, saturdays, sundays};

    display(days);

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