#include<iostream>
#include <cmath>
using namespace std;

int main() { 
    double a,b,c,d,e,f,g,k,answer;
    std:cout.precision(14);
    
    a = 1000;         
    b = 0.0001;       
        d = pow((a-b),3);             //(a-b)^3
        e = pow(a,3);                 //(a^3)
        g = 3*a*pow(b,2);             //(3*a*b^2)
        f = pow(b,3);                 //(b^3)
        k = 3*pow(a,2)*b;             //(3*a^2*b)
        answer = (d-(e-g))/(f-k);
    
    cout << fixed << "d = (a-b)^3 = " << d << endl;
    cout << "e = (a^3) = " << e << endl;
    cout << "g = (3*a*b^2) = " << g << endl;
    cout << "f = (b^3) = " << f << endl;
    cout << "k = (3*a^2*b) = " << k << endl;
    cout << "Ответ: " << answer;

    
    return 0;
}