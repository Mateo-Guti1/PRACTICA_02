// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 5
// Problema planteado: Leer un año y un mes (como número) y realizar una función para determinar cuántos días tiene ese mes considerando si el año es bisiesto.

#include <iostream>
using namespace std;

// Función para verificar si un año es bisiesto
bool esBisiesto(int año) {
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

// Función para obtener los días del mes
int diasEnMes(int año, int mes) {
    switch (mes) {
        case 4: case 6: case 9: case 11:
            return 30; // Meses con 30 días
        case 2:
            return esBisiesto(año) ? 29 : 28; // Febrero, dependiendo si es bisiesto
        default:
            return 31; // Meses con 31 días
    }
}

int main() {
    int año, mes;
    cout << "Ingrese el año: ";
    cin >> año;
    cout << "Ingrese el número del mes (1-12): ";
    cin >> mes;

    int dias = diasEnMes(año, mes);
    cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    return 0;
}
