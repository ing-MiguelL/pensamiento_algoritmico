# Pedimos al usuario que ingrese dos números
num1 = float(input("Introduce el primer número: "))
num2 = float(input("Introduce el segundo número: "))

# Realizamos las operaciones solo con operadores lógicos

# Sumar
if True:  # Siempre se realiza la suma
    suma = num1 + num2
    print(f"La suma es: {suma}")

# Restar
if True:  # Siempre se realiza la resta
    resta = num1 - num2
    print(f"La resta es: {resta}")

# Multiplicar
if True:  # Siempre se realiza la multiplicación
    multiplicacion = num1 * num2
    print(f"La multiplicación es: {multiplicacion}")

# Dividir (asegurándonos de no dividir por cero)
if num2 != 0:  # Comprobamos si num2 no es cero
    division = num1 / num2
    print(f"La división es: {division}")
else:
    print("No se puede dividir por cero.")

# Módulo (resto de la división)
if num2 != 0:  # Comprobamos que num2 no sea cero
    modulo = num1 % num2
    print(f"El módulo es: {modulo}")
else:
    print("No se puede calcular el módulo con divisor cero.")
    
    # Pedir al usuario el precio del artículo
precio_original = float(input("Introduce el precio del artículo: "))

# Definir el porcentaje de descuento
descuento_porcentaje = 15

# Calcular el descuento
descuento = precio_original * (descuento_porcentaje / 100)

# Calcular el precio final
precio_final = precio_original - descuento

# Mostrar el resultado
print(f"El precio original es: {precio_original}")
print(f"El descuento aplicado es: {descuento}")
print(f"El precio final después del descuento es: {precio_final}")

# esperar que el usuario presione enter antes de cerrar
input("presione enter para salir..")