// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 9
// Problema planteado: Leer un número entero y realizar una función para determinar si el número ingresado pertenece a la secuencia de Fibonacci.

#include <iostream>
using namespace std;

// Función para verificar si un número pertenece a la secuencia de Fibonacci
bool esFibonacci(int numero) {
    int a = 0, b = 1, c;
    if (numero == a || numero == b) return true; // Verificar los primeros dos números
    while (b <= numero) {
        c = a + b; // Siguiente número en la secuencia
        if (c == numero) return true;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esFibonacci(numero)) {
        cout << "El número " << numero << " pertenece a la secuencia de Fibonacci." << endl;
    } else {
        cout << "El número " << numero << " no pertenece a la secuencia de Fibonacci." << endl;
    }

    return 0;
}
