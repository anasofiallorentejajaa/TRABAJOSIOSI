#include <iostream>
using namespace std;

int main() {
    int hora, minuto;

    cout << "Hora de entrada" << endl;
    cout << "Ingrese hora (0-23): ";
    cin >> hora;
    cout << "Ingrese minutos (0-59): ";
    cin >> minuto;

    if (hora < 0 || hora > 23) {
        cout << "Error: la hora debe estar entre 0 y 23" << endl;
    } else if (minuto < 0 || minuto > 59) {
        cout << "Error: los minutos deben estar entre 0 y 59" << endl;
    } else {
        cout << "Horario registrado de entrada: " << hora << ":";
        if (minuto < 10) cout << "0";
        cout << minuto << endl;
    }

    cout << "Hora de salida" << endl;
    cout << "Ingrese hora (0-23): ";
    cin >> hora;
    cout << "Ingrese minutos (0-59): ";
    cin >> minuto;

    if (hora < 0 || hora > 23) {
        cout << "Error: la hora debe estar entre 0 y 23" << endl;
    } else if (minuto < 0 || minuto > 59) {
        cout << "Error: los minutos deben estar entre 0 y 59" << endl;
    } else {
        cout << "Horario registrado de salida: " << hora << ":";
        if (minuto < 10) cout << "0";
        cout << minuto << endl;
    }

    return 0;
}
