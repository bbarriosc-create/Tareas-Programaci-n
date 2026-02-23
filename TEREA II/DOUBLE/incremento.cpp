#include <iostream>
using namespace std;
int main () {

    double monto;
    double porcentaje;

    cout <<"ingrese monto: ";
    cin >> monto;
    cout <<"ingrese porcentaje ";
    cin >> porcentaje;

    cout << "Total: " << (monto * porcentaje / 100 ) << endl;
    cout << "Total Incremento: " << monto + (monto * porcentaje / 100) << endl;

    return 0;

}