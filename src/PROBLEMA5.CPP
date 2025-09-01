#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    cout << "Ingrese dia: ";
    cin >> dia;
    cout << "Ingrese mes: ";
    cin >> mes;

    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 19)) {
        cout << "Tu signo es Acuario" << endl;
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        cout << "Tu signo es Piscis" << endl;
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        cout << "Tu signo es Aries" << endl;
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        cout << "Tu signo es Tauro" << endl;
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        cout << "Tu signo es Geminis" << endl;
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        cout << "Tu signo es Cancer" << endl;
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        cout << "Tu signo es Leo" << endl;
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        cout << "Tu signo es Virgo" << endl;
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        cout << "Tu signo es Libra" << endl;
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        cout << "Tu signo es Escorpio" << endl;
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        cout << "Tu signo es Sagitario" << endl;
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        cout << "Tu signo es Capricornio" << endl;
    }

    return 0;
}
