// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado: Realizar una función para imprimir los primeros N números de la secuencia de Fibonacci.

#include <iostream>
using namespace std;

// Función para imprimir los primeros N números de la secuencia de Fibonacci
void imprimirFibonacci(int N) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < N; i++) {
        c = a + b; // Siguiente número en la secuencia
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese el número de términos de la secuencia de Fibonacci que desea imprimir: ";
    cin >> N;

    if (N > 0) {
        imprimirFibonacci(N);
    } else {
        cout << "El número de términos debe ser mayor que cero." << endl;
    }

    return 0;
}
