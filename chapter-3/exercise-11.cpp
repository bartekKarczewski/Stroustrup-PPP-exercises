/*Chapter 3 ** excercise 1:
    Program proszący użytkownika o podanie, ile ma jednogroszówek, dwugroszówek,
    pięciogroszówek, dziesięciogroszówek, dwudziestogroszówek, pięćdziesięciogroszówek oraz złotówek. 
    Następnie program drukuje zbiorczą informację na temat zasobów */

#include "../std_lib_facilities.h"
#include <iostream>

void sum_up(vector<int> monety){
    vector<int> ratio = {1,2,5,10,20,50,100};
    int sum{0};
    for(int i = 0; i < monety.size(); ++i){
        sum += monety[i] * ratio[i];
    }
    cout << "==================================" << endl;
    cout << "Razem masz " << sum << " groszy "<< "(" << sum/100.00 << " złotych)." << endl;

}

void print_out(vector<int> monety){
    monety[0] <= 4 ? cout << "Masz " << monety[0] << " jednogroszówki." << endl : cout << "Masz " << monety[0] << " jednogroszówek." << endl;
    monety[1] <= 4 ? cout << "Masz " << monety[1] << " dwugroszówki." << endl : cout << "Masz " << monety[1] << " dwugroszówek." << endl;
    monety[2] <= 4 ? cout << "Masz " << monety[2] << " pięciogroszówki." << endl : cout << "Masz " << monety[2] << " pięciogroszówek." << endl;
    monety[3] <= 4 ? cout << "Masz " << monety[3] << " dziesięciogroszówki." << endl : cout << "Masz " << monety[3] << " dziesięciogroszówek." << endl;
    monety[4] <= 4 ? cout << "Masz " << monety[4] << " dwudziestogroszówki." << endl : cout << "Masz " << monety[4] << " dwudziestogroszówek." << endl;
    monety[5] <= 4 ? cout << "Masz " << monety[5] << " pięćdziesięciogroszówki." << endl : cout << "Masz " << monety[5] << " pięćdziesięciogroszówek." << endl;
    monety[6] <= 4 && monety[6] > 1 ? cout << "Masz " << monety[6] << " złote." << endl : cout << "Masz " << monety[6] << " złoty." << endl;
}


void init(){
    int jedno{0};
    int dwu{0};
    int piecio{0};
    int dziesiec{0};
    int dwadziescia{0};
    int piecdziesiat{0};
    int zloty{0};
    vector<int> monety;

    cout << "Ile masz jednogroszówek? ";
    cin >> jedno;
    monety.push_back(jedno);
    cout << "Ile masz dwugroszówek? ";
    cin >> dwu;
    monety.push_back(dwu);
    cout << "Ile masz pięciogroszówek? ";
    cin >> piecio;
    monety.push_back(piecio);
    cout << "Ile masz dziesięciogroszówek? ";
    cin >> dziesiec;
    monety.push_back(dziesiec);
    cout << "Ile masz dwudziestogroszówek? ";
    cin >> dwadziescia;
    monety.push_back(dwadziescia);
    cout << "Ile masz pięcdziesięciogroszówek? ";
    cin >> piecdziesiat;
    monety.push_back(piecdziesiat);
    cout << "Ile masz złotówek? ";
    cin >> zloty;
    monety.push_back(zloty);
    cout << endl;
    cout << "==============================" << endl;
    print_out(monety);
    sum_up(monety);
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