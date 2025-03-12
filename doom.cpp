#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string tipo_demonio;
    double distancia;

    // Leer el tipo de demonio y la distancia desde la entrada
    std::getline(std::cin, tipo_demonio);
    std::cin >> distancia;

    double velocidad = 0;
    double tiempo = 0;

    // Determinar la velocidad del demonio y calcular el tiempo
    if (tipo_demonio == "Zombieman") {
        velocidad = 5;
    } else if (tipo_demonio == "Imp") {
        velocidad = 10;
    } else if (tipo_demonio == "Baron of Hell") {
        velocidad = 3;
    } else {
        std::cout << "Tipo de demonio no válido" << std::endl;
        return 0; // Salir del programa si el tipo de demonio no es válido


        
    }

    tiempo = distancia / velocidad;

    // Imprimir el resultado con dos decimales de precisión
    std::cout << std::fixed << std::setprecision(2) << "Tiempo: " << tiempo << " segundos" << std::endl;

    return 0;
}
