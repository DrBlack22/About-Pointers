#include <iostream>
using namespace std;
int main()
{
    char h;
    cout << sizeof(h) << endl;
    int f;
    cout << sizeof(f) << endl;
    double i;
    cout << sizeof(i) << endl;
    double ham[22];
    cout << sizeof(ham) << endl;
    cout << sizeof(ham)/sizeof(ham[0]) << endl;
}
