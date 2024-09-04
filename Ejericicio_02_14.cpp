// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 14
// Problema planteado: Realizar una función para generar los cuadrados perfectos en el rango de 1 a n.

#include <iostream>
#include <cmath>
using namespace std;

// Función para generar cuadrados perfectos hasta n
void generarCuadradosPerfectos(int n) {
    for (int i = 1; i * i <= n; i++) {
        cout << i * i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese el límite superior (n) para los cuadrados perfectos: ";
    cin >> n;

    generarCuadradosPerfectos(n);
    return 0;
}
