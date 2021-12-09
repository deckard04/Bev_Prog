//
// Created by György Mitró on 2021. 12. 09..
//
#include "std_lib_facilities.h"

using namespace std;

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i){
        os << a[i] << '\n';
    }
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v){
        os << vv << '\n';
    }
    return os;
}

int main()
try {
    // Drill - free-store allocation

    int* arr10 = new int[10];

    int x = 100;
    for (int i = 0; i < 20; ++i) {
        arr10[i] = x;
        ++x;
    }

    print_array(cout, arr10, 20);
    delete[] arr10;

    vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }

    print_vector(cout, v10);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}
