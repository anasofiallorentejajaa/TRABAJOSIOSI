#include <iostream>
using namespace std;

int main() {
    int pinCorrecto = 1234;
    int pinIngresado;
    int saldo = 500000; // saldo inicial
    int opcion;
    int intentos = 0;

    
    cout << "Ingrese su PIN: ";
    cin >> pinIngresado;

    if (pinIngresado == pinCorrecto) {
        cout << "\n===== MENU =====\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Su saldo es: $" << saldo << "\n";
        }
        if (opcion == 2) {
            int monto;
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            if (monto > 0 && monto <= saldo) {
                saldo -= monto;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << "\n";
            }
            if (monto > saldo) {
                cout << "Saldo insuficiente.\n";
            }
            if (monto <= 0) {
                cout << "Monto invalido.\n";
            }
        }
        if (opcion == 3) {
            cout << "Gracias por usar el cajero.\n";
        }
        if (opcion < 1 || opcion > 3) {
            cout << "Opcion invalida.\n";
        }
    } 
    else {
        intentos++;
        cout << "PIN incorrecto. Intentos restantes: " << (3 - intentos) << "\n";

        
        cout << "Ingrese su PIN: ";
        cin >> pinIngresado;

        if (pinIngresado == pinCorrecto) {
            cout << "\n===== MENU =====\n";
            cout << "1. Consultar saldo\n";
            cout << "2. Retirar dinero\n";
            cout << "3. Salir\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            if (opcion == 1) {
                cout << "Su saldo es: $" << saldo << "\n";
            }
            if (opcion == 2) {
                int monto;
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << "\n";
                }
                if (monto > saldo) {
                    cout << "Saldo insuficiente.\n";
                }
                if (monto <= 0) {
                    cout << "Monto invalido.\n";
                }
            }
            if (opcion == 3) {
                cout << "Gracias por usar el cajero.\n";
            }
            if (opcion < 1 || opcion > 3) {
                cout << "Opcion invalida.\n";
            }
        } 
        else {
            intentos++;
            cout << "PIN incorrecto. Intentos restantes: " << (3 - intentos) << "\n";

            
            cout << "Ingrese su PIN: ";
            cin >> pinIngresado;

            if (pinIngresado == pinCorrecto) {
                cout << "\n===== MENU =====\n";
                cout << "1. Consultar saldo\n";
                cout << "2. Retirar dinero\n";
                cout << "3. Salir\n";
                cout << "Seleccione una opcion: ";
                cin >> opcion;

                if (opcion == 1) {
                    cout << "Su saldo es: $" << saldo << "\n";
                }
                if (opcion == 2) {
                    int monto;
                    cout << "Ingrese el monto a retirar: ";
                    cin >> monto;
                    if (monto > 0 && monto <= saldo) {
                        saldo -= monto;
                        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << "\n";
                    }
                    if (monto > saldo) {
                        cout << "Saldo insuficiente.\n";
                    }
                    if (monto <= 0) {
                        cout << "Monto invalido.\n";
                    }
                }
                if (opcion == 3) {
                    cout << "Gracias por usar el cajero.\n";
                }
                if (opcion < 1 || opcion > 3) {
                    cout << "Opcion invalida.\n";
                }
            } 
            else {
                cout << "PIN incorrecto. Tarjeta bloqueada.\n";
            }
        }
    }

    return 0;
}
