/*Chapter 3 ** excercise 1:
    Program proszący użytkownika o podanie, ile ma jednogroszówek, dwugroszówek,
    pięciogroszówek, dziesięciogroszówek, dwudziestogroszówek, pięćdziesięciogroszówek oraz złotówek. 
    Następnie program drukuje zbiorczą informację na temat zasobów */

#include "../std_lib_facilities.h"
#include <iostream>


void init(){
    int jedno{0};
    int dwu{0};
    int piecio{0};
    int dziesiec{0};
    int dwadziescia{0};
    int piecdziesiat{0};
    int zloty{0};

    cout << "Ile masz jednogroszówek? ";
    cin >> jedno;
    cout << "Ile masz dwugroszówek? ";
    cin >> dwu;
    cout << "Ile masz pięciogroszówek? ";
    cin >> piecio;
    cout << "Ile masz dziesięciogroszówek? ";
    cin >> dziesiec;
    cout << "Ile masz dwudziestogroszówek? ";
    cin >> dwadziescia;
    cout << "Ile masz pięcdziesięciogroszówek? ";
    cin >> piecdziesiat;
    cout << "Ile masz złotówek? ";
    cin >> zloty;
    cout << endl;
    cout << "==============================" << endl;
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