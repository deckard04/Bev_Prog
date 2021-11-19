#include "std_lib_facilities.h"

namespace x{
    int var {};

    void print(){
        cout << var << endl;
    }
}
namespace y{
    int var {};

    void print(){
        cout << var << endl;
    }

}

namespace z{
    int var {};

    void print(){
        cout << var << endl;
    }
}

int main(){

    x::var = 7;
    x::print();
    using namespace y;
    var=9;
    print();
    {
        using z::var;
        using z::print;
        var = 11;
        print();
    }
    print();
    x::print();

}

