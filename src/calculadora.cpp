#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char oper;

    cout << "Bienvenido" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> oper;

    if (oper == '+') {
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (oper == '-') {
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (oper == '*') {
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
     }
    else if (oper == '/') {
        if (num2 == 0) { 
            cout << "Error: No se puede dividir entre 0" << endl;
        } else {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        }
    }
    else {
        cout << "Error: operacion no reconocida." << endl;
    }
    return 0;
}