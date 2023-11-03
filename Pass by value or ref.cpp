#include <iostream>
using namespace std;
void passbyValue(int x);
void passbyReference(int *x);
int main()
{
    int ham = 22;
    int fam = 8;
    passbyValue(ham);
    passbyReference(&fam);
    cout << "Ham is now " << ham << endl;
    cout << "Fam is now " << fam << endl;
}
void passbyValue(int x){
    x = 43;
}
void passbyReference(int *x){
    *x = 9;
}
