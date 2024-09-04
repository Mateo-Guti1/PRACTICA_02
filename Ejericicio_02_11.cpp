// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 11
// Problema planteado: Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n términos.

#include <iostream>
using namespace std;

// Función para generar la secuencia especial
void generarSecuencia(int n) {
    int a = 1, b = 1, c = 2; // Los primeros tres términos de la secuencia
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    if (n >= 3) cout << c << " ";
    
    for (int i = 4; i <= n; i++) {
        if (i % 2 == 0) {
            c *= 2; // Duplicar el número cada dos posiciones
        } else {
            c += 5; // Incrementar en 5 para las posiciones impares después del tercer término
        }
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese el número de términos a generar en la secuencia: ";
    cin >> n;

    generarSecuencia(n);
    return 0;
}
