#include <iostream>
using namespace std;

int main() {
    float subtotal, precioFinal;
    int tipocliente, numprod;

    cout << "Ingrese su subtotal: ";
    cin >> subtotal;

    cout << "Ingrese su tipo de cliente (1 para VIP, 2 para regular): ";
    cin >> tipocliente;

    cout << "Ingrese cuantos productos compro: ";
    cin >> numprod;

    if (tipocliente == 1) {
       
        precioFinal = subtotal * (1 - 0.20);
        cout << "Su precio final es de: " << precioFinal << endl;
    } else if (tipocliente == 2 && numprod >= 4) {

        precioFinal = subtotal * (1 - 0.10);
        cout << "Su precio final es de: " << precioFinal << endl;
    } else if (tipocliente == 2 && numprod < 4) {
       
        precioFinal = subtotal;
        cout << "Su precio final es de: " << precioFinal << endl;
    } else {
        cout << "Tipo de cliente invalido." << endl;
    }

    return 0;
}