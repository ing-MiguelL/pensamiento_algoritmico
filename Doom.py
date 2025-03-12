#Lee el tipo de demonio
tipo_demonio = input() #definimos las variables /entrada

#Lee la distancia
distancia = float(input())# definimos las variables/entrada

#Calcula el tiempo/ proceso que hara el programa 
if tipo_demonio == "zombieman":
    velocidad = 5
    tiempo = distancia / velocidad
    print("Tiempo: {:.2f} segundos".format(tiempo))#me toco averiguar como se usa el formato tiempo 
elif tipo_demonio == "imp":
    velocidad = 10
    tiempo = distancia / velocidad #en esta parte se me dificulto saber que deberia usar
    print("Tiempo: {:.2f} segundos".format(tiempo))
elif tipo_demonio == "baron of hell":
    velocidad = 3
    tiempo = distancia / velocidad
    print("Tiempo: {:.2f} segundos".format(tiempo))
else:
    print("Tipo de demonio no válido")
    #Espera una entrada del usuario antes de cerrar la terminal
input("Presiona Enter para salir")
