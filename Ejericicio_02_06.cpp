// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 6
// Problema planteado: Leer una hora (en formato de 24 horas) y realizar una función para determinar si corresponde a la mañana, tarde, noche o madrugada.

#include <iostream>
using namespace std;

// Función para determinar el momento del día
string determinarMomento(int hora) {
    if (hora >= 6 && hora < 12) {
        return "mañana";
    } else if (hora >= 12 && hora < 18) {
        return "tarde";
    } else if (hora >= 18 && hora < 24) {
        return "noche";
    } else {
        return "madrugada";
    }
}

int main() {
    int hora;
    cout << "Ingrese la hora en formato de 24 horas (0-23): ";
    cin >> hora;

    if (hora >= 0 && hora < 24) {
        cout << "La hora corresponde a la " << determinarMomento(hora) << "." << endl;
    } else {
        cout << "Hora no válida." << endl;
    }

    return 0;
}
