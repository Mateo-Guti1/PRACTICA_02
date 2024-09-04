// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 15
// Problema planteado: Generar un número aleatorio no mayor a dos dígitos y mostrarlo en literal.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para convertir número a literal
string numeroEnLiteral(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

    if (num < 10) {
        return unidades[num];
    } else if (num < 20) {
        return especiales[num - 10];
    } else {
        int d = num / 10; // Decenas
        int u = num % 10; // Unidades
        if (u == 0) {
            return decenas[d];
        } else {
            return decenas[d] + " y " + unidades[u];
        }
    }
}

int main() {
    srand(time(0));
    int num = rand() % 100; // Generar un número aleatorio entre 0 y 99

    cout << "Número aleatorio: " << num << endl;
    cout << "Número en literal: " << numeroEnLiteral(num) << endl;
    
    return 0;
}
