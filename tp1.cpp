#include <bits/stdc++.h>

using namespace std;

class CCuenta {
private:
    string name;
    int cant;

public:
    CCuenta(string n, int c);
    string setName(string n);
    int setCant(int c);
};

CCuenta::CCuenta(string n, int c) {
    name = setName(n);
    cant = setCant(c);
}

string CCuenta::setName(string n) {
    name = n;
    return name;
}

int CCuenta::setCant(int c) {
    cant = c;
    return cant;
}

int main() {
    string n = " ";
    int c = 0;

    cout << "Ingrese nombre: ";
    getline(cin, n);

    cout << "Ingrese monto: ";
    cin >> c;

    CCuenta cuenta(n, c);

    cout << "Nombre: " << cuenta.setName(n) << endl;
    cout << "Cantidad: " << cuenta.setCant(c) << endl;

    return 0;
}
