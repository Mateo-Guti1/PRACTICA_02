// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 13
// Problema planteado: Generar una secuencia de números aleatorios entre 1 y 100 y marcar los divisibles por 5 con un asterisco (*).

#include <iostream>
#include <cstdlib> // Librería para funciones de números aleatorios
#include <ctime>   // Librería para inicializar la semilla aleatoria
using namespace std;

// Función para generar y mostrar números aleatorios
void generarNumerosAleatorios(int n) {
    srand(time(0)); // Inicializar semilla para números aleatorios

    for (int i = 0; i < n; i++) {
        int num = rand() % 100 + 1; // Generar número entre 1 y 100
        cout << num;
        if (num % 5 == 0) {
            cout << " *"; // Agregar asterisco si el número es divisible entre 5
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de números aleatorios a generar: ";
    cin >> n;

    generarNumerosAleatorios(n);
    return 0;
}
