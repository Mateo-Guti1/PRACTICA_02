// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 12
// Problema planteado: Leer dos valores enteros distintos entre sí y generar una serie ascendente o descendente.

#include <iostream>
using namespace std;

// Función para generar serie ascendente
void serieAscendente(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para generar serie descendente
void serieDescendente(int a, int b) {
    for (int i = a; i >= b; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos números enteros distintos: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        serieDescendente(num1, num2);
    } else if (num1 < num2) {
        serieAscendente(num1, num2);
    } else {
        cout << "Los números no deben ser iguales." << endl;
    }

    return 0;
}
