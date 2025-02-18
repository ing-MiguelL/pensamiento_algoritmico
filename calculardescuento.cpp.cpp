/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declaramos las variables
    double precio_original, descuento, precio_final;

    // Pedimos al usuario que ingrese el precio del artículo
    cout << "Ingresa el precio del artículo: ";
    cin >> precio_original;

    // Calculamos el descuento (15%)
    descuento = precio_original * 0.15;

    // Calculamos el precio final
    precio_final = precio_original - descuento;

    // Mostramos el resultado
    cout << "El descuento aplicado es: " << descuento << endl;
    cout << "El precio final después de aplicar el descuento es: " << precio_final << endl;

    // Esperamos que el usuario presione Enter para salir
    cout << "Presiona Enter para salir...";
    cin.ignore();  // Ignora cualquier entrada pendiente
    cin.get();     // Espera que el usuario presione Enter

    return 0;
}