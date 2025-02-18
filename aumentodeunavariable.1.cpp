/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Le pedimos al usuario que ingrese el valor inicial para la variable
    double mi_variable;
    cout << "Ingresa el valor inicial para la variable: ";
    cin >> mi_variable;

    // Aumentamos en 5
    mi_variable += 5;

    // Reducimos en 3
    mi_variable -= 3;

    // Multiplicamos por 2
    mi_variable *= 2;

    // Dividimos entre 4
    mi_variable /= 4;

    // Mostramos el resultado final
    cout << "El valor final de la variable es: " << mi_variable << endl;

    // Esperamos que el usuario presione Enter para cerrar
    cout << "Presiona Enter para salir...";
    cin.ignore();  // Ignora cualquier entrada pendiente
    cin.get();     // Espera que el usuario presione Enter

    return 0;
}