// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 4
// Problema planteado: Leer tres números enteros y realizar una función para determinar si pueden formar un triángulo rectángulo (aplicar el teorema de Pitágoras).

#include <iostream>
#include <algorithm> // Librería para funciones de algoritmos como sort
using namespace std;

// Función para verificar si tres lados pueden formar un triángulo rectángulo
bool esTrianguloRectangulo(int a, int b, int c) {
    int lados[3] = {a, b, c};
    sort(lados, lados + 3); // Ordenar los lados de menor a mayor
    return (lados[0] * lados[0] + lados[1] * lados[1] == lados[2] * lados[2]); // Verificar teorema de Pitágoras
}

int main() {
    int a, b, c;
    cout << "Ingrese los tres lados del triángulo: ";
    cin >> a >> b >> c;

    if (esTrianguloRectangulo(a, b, c)) {
        cout << "Los lados pueden formar un triángulo rectángulo." << endl;
    } else {
        cout << "Los lados no pueden formar un triángulo rectángulo." << endl;
    }
    return 0;
}
