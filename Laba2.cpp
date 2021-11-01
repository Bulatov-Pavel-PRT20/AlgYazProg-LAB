#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a, n, x ;
    for ( n = 0; n < INFINITY; n++)
    {   
        a = ((1/pow(2,n))+(1/pow(3,n)));
        if (a<0.0001) break;   // задаем точность 
        x+=a;     
    }
    
    cout << "Cумма ряда: "<< x <<endl;
    
    return 0;
}
