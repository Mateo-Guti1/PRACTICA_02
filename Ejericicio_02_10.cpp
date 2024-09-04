// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 10
// Problema planteado: Leer un número de cuatro dígitos y realizar una función para determinar si al menos dos de los dígitos son iguales.

#include <iostream>
using namespace std;

// Función para verificar si al menos dos dígitos de un número de cuatro dígitos son iguales
bool hayDigitosIguales(int numero) {
    int digitos[4];
    digitos[0] = numero / 1000;       // Primer dígito
    digitos[1] = (numero / 100) % 10; // Segundo dígito
    digitos[2] = (numero / 10) % 10;  // Tercer dígito
    digitos[3] = numero % 10;         // Cuarto dígito

    // Comparar los dígitos entre sí
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digitos[i] == digitos[j]) {
                return true; // Encontró al menos dos dígitos iguales
            }
        }
    }
    return false;
}

int main() {
    int numero;
    cout << "Ingrese un número de cuatro dígitos: ";
    cin >> numero;

    if (numero >= 1000 && numero <= 9999) {
        if (hayDigitosIguales(numero)) {
            cout << "El número tiene al menos dos dígitos iguales." << endl;
        } else {
            cout << "Todos los dígitos del número son diferentes." << endl;
        }
    } else {
        cout << "El número ingresado no es de cuatro dígitos." << endl;
    }

    return 0;
}
