/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declaramos dos variables de tipo double (real)
    double num1, num2;

    // Pedimos al usuario que ingrese dos números
    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Realizamos las operaciones y mostramos los resultados

    // Suma
    cout << "La suma de " << num1 << " + " << num2 << " es: " << num1 + num2 << endl;

    // Resta
    cout << "La resta de " << num1 << " - " << num2 << " es: " << num1 - num2 << endl;

    // Multiplicación
    cout << "La multiplicación de " << num1 << " * " << num2 << " es: " << num1 * num2 << endl;

    // División
    if (num2 != 0) {
        cout << "La división de " << num1 << " / " << num2 << " es: " << num1 / num2 << endl;
    } else {
        cout << "No se puede dividir entre cero." << endl;
    }

    // Módulo (solo con enteros)
    // Convertimos num1 y num2 a enteros para usar %
    int int_num1 = static_cast<int>(num1);
    int int_num2 = static_cast<int>(num2);

    if (int_num2 != 0) {
        cout << "El módulo de " << int_num1 << " % " << int_num2 << " es: " << int_num1 % int_num2 << endl;
    } else {
        cout << "No se puede hacer módulo con cero." << endl;
    }

    // Esperamos que el usuario presione Enter para salir
    cout << "Presiona Enter para salir...";
    cin.ignore();  // Ignora cualquier entrada pendiente
    cin.get();     // Espera que el usuario presione Enter

    return 0;
}