#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float a = 100;
    float b = 21;

    // cout<< a++ << endl;
    // cout << ++a << endl;
    cout << "addition :"<< a + b << endl;
    cout << "subtraction :"<< a-b << endl;
    cout << "product :" << a*b << endl;
    cout << "division :"<< a/b << endl;
    cout << "remainder :"<< fmod(a,b) << endl;

    return 0;
}