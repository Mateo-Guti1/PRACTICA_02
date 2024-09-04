// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez Catari
// Fecha creación: 03/09/2024
// Número de ejercicio: 1
// Problema planteado: Leer una cantidad de segundos y realizar una función para convertirla a horas, minutos y segundos.

#include <iostream>
using namespace std;

// Función para convertir segundos a horas, minutos y segundos
void convertirTiempo(int segundos, int &horas, int &minutos, int &seg) {
    horas = segundos / 3600; // 1 hora = 3600 segundos
    segundos %= 3600;
    minutos = segundos / 60; // 1 minuto = 60 segundos
    seg = segundos % 60;     // Segundos restantes
}

int main() {
    int segundos, horas, minutos, seg;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    convertirTiempo(segundos, horas, minutos, seg);

    cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << seg << endl;
    return 0;
}
