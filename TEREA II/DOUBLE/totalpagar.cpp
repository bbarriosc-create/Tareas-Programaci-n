#include <iostream>
using namespace std;

int main () {
    double precio;
    double cantidad;

    cout << "ingrese precio: ";
    cin >> precio;
    cout << "ingrese cantidad: ";
    cin >> cantidad;

    cout << "Total: " << precio * cantidad << endl;

    return 0;
}