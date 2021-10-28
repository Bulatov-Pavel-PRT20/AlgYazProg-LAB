#include<iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int m,n,a;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите n: ";
    cin >> n;
    a = m-++n;
        cout << "Ответ(1): " << a << endl;
        
        if (++m > --n)
            cout << "Ответ(2): Верно" << endl;
        else
            cout << "Ответ(2): Не верно" << endl;

        if (--n < ++m)
            cout << "Ответ(3): Верно" << endl;
        else
            cout << "Ответ(3): Не верно" << endl;
        
    
    return 0;
}