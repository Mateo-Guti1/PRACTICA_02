// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 2
// Problema planteado: Leer las longitudes de los dos catetos de un triángulo rectángulo y realizar una función para calcular la hipotenusa usando el teorema de Pitágoras.

#include <iostream>
#include <cmath> // Librería para funciones matemáticas
using namespace std;

// Función para calcular la hipotenusa usando el teorema de Pitágoras
double calcularHipotenusa(double cateto1, double cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2); // Fórmula de Pitágoras
}

int main() {
    double cateto1, cateto2;
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    double hipotenusa = calcularHipotenusa(cateto1, cateto2);
    cout << "La hipotenusa es: " << hipotenusa << endl;
    return 0;
}
