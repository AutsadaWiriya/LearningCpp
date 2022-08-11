#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "a = " << a << endl;
    cout << "preflix = " << ++a << endl;
    cout << "a after = " << a << endl;
    cout << "\n";

    int b = 5;
    cout << "b = " << b << endl;
    cout << "preflix = " << --b << endl;
    cout << "b after = " << b << endl;
    cout << "\n";

    int c = 5;
    cout << "c = " << c << endl;
    cout << "postflix = " << c++ << endl;
    cout << "c after = " << c << endl;
    cout << "\n";
    
    int d = 5;
    cout << "d = " << d << endl;
    cout << "preflix = " << d-- << endl;
    cout << "d after = " << d << endl;
}