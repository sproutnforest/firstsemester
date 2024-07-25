#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x, a, b, c, d;
    cout<< "Ketikkan nilai A: ";
    cin>>a;
    cout<< "Ketikkan nilai B: ";
    cin>>b;
    cout<< "Ketikkan nilai C: ";
    cin>>c;
    cout<< "Ketikkan nilai D: ";
    cin>>d;

    x = (a + pow(b,2)-(4*c*d))/(2*(a+b));
    cout<< "X = " <<x<<endl;

    return 0;

}