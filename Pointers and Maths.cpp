#include <iostream>
using namespace std;
int main()
{
    int ham[8];
    int *ha0 = &ham[0];
    int *ha1 = &ham[1];
    int *ha2 = &ham[2];
    cout << "ha0 is at " << ha0 << endl;
    cout << "ha1 is at " << ha1 << endl;
    cout << "ha2 is at " << ha2 << endl;
    ha0 ++;
    cout << "ha0 is now at " << ha0 << endl;

}
