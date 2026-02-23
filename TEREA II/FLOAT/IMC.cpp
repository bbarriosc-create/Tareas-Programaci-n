#include <iostream>
using namespace std;

int main () {
    float altura_mts;
    float peso_kg;

    cout << "ingrese altura en Metros: ";
    cin >> altura_mts;
    cout << "ingrese peso en Kilogramos: ";
    cin >> peso_kg;

    cout << "IMC = " << peso_kg / (altura_mts * altura_mts) << endl;

    return 0;

}