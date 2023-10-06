# Mostrar los conceptos basicos de estadistica
#   Autor: Ethan YAhel Sarricolea cortés 

global ciclo
ciclo=True

def conceptos():
    seleccion = int(input("Selecciona una opcion: \n"))
    if seleccion == 1:
        print("La estadistica es una rama de las matematicas que estudia la variabilidad y los datos, se divide en estadistica descriptiva y estadistica inferencial.\n\n")
    elif seleccion == 2:
        print("Un datos es un valor que mide cantidad, caracteristicas o cualidades.\n")
    elif seleccion == 3:
        print("Un univeso es un conjunto de individuos que forman parte de nuestro interes o estudio, debe estar bien delimitado.\n")
    elif seleccion == 4:
        print("La población en estadistica es un conjunto de datos del universo, estos cuentan con una caracteristica especifica que los distingue.\n")
    elif seleccion == 5:
        print("Una variable es una caracteristica que se mide en un conjunto de elementos para distinguir la población, se dividen en 2 tipos:\nCualitativas(Que miden cualidades) y Cuantitativas(Que miden cantidades)\nEstas a su ves se dividen en 2 tipos:\nCualitativas: Nominales(Carecen de jerarquia) y ordinarias(tienen una jerarquia de mayor a menor)\nCuantitativas: Discretas(Numeros enteros y finitos) y Continuas(Numeros decimales o infinitos).\n")
    elif seleccion == 6:
        print("Una muestra es un subconjunto de l población, ya sea dirigida o aleatoria.\n")
    elif seleccion == 7:
        print("Un parametro es una unidad o medicion que sirve de referente o caracteristica global poblacional.\n")
    elif seleccion == 8:
        print("Saliendo...")
        ciclo=False
    else:
        print("Debes seleccionar una de las opciones")

while ciclo==True:
    print("¿Qué concepto de estadistica basica quieres conocer?")
    print("1-Estadistica 2-Dato 3-Universo 4-Población\n5-Variables 6-Muestra 7-Parametros 8-Salir")
    conceptos()
    print(ciclo)
print("Has salido del programa.")