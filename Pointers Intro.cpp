#include <iostream>
using namespace std;
int main()
{
    int ham;
    cout << &ham << endl;

    int *hampointer = &ham;
    cout << hampointer << endl;
}
