// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 7
// Problema planteado: Realizar una función para imprimir la tabla de multiplicar de un número dado.

#include <iostream>
using namespace std;

// Función para imprimir la tabla de multiplicar de un número
void imprimirTablaMultiplicar(int numero) {
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número para imprimir su tabla de multiplicar: ";
    cin >> numero;

    imprimirTablaMultiplicar(numero);

    return 0;
}
