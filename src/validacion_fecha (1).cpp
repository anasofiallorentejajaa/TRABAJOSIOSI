#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    int mesActual;

    cout << "Ingrese su fecha de nacimiento (dia mes anio): ";
    cin >> dia >> mes >> anio;

    cout << "Ingrese el mes actual (numero 1-12): ";
    cin >> mesActual;

    if (mes < 1 || mes > 12) {
        cout << "Error: Mes invalido." << endl;
    } else {
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) {
            if (mes == mesActual)
                cout << "¡Feliz cumpleaños! Usted recibe el descuento." << endl;
            else
                cout << "Fecha valida, pero no corresponde al mes actual." << endl;
        }
        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)) {
            if (mes == mesActual)
                cout << "¡Feliz cumpleaños! Usted recibe el descuento." << endl;
            else
                cout << "Fecha valida, pero no corresponde al mes actual." << endl;
        }
        else if (mes == 2 && dia >= 1 && dia <= 28) { // Febrero simple, sin bisiesto
            if (mes == mesActual)
                cout << "¡Feliz cumpleaños! Usted recibe el descuento." << endl;
            else
                cout << "Fecha valida, pero no corresponde al mes actual." << endl;
        }
        else {
            cout << "Error: Dia invalido." << endl;
        }
    }

    return 0;
