import math
import numpy as np

def tupla_posicion(matriz):
    matriz_aux = np.array(matriz)
    matriz_aux.tolist()
    #print(matriz_aux)
    tupla = tuple(matriz_aux)
    lista_posiciones = []
    for i in tupla:
        if i>0.5:
            lista_posiciones.append(tupla.index(i))
    tupla_posiciones = tuple(lista_posiciones)
    print(tupla_posiciones)

def conversion(matriz):
    C = np.array(matriz)
    C = C.reshape(24,1)
    print(C)
    return C

def sigmoide(matriz):
    matrizx = [] #CREO UNA LISTA NORMAL
    for i in matriz:
        a = 1/(1+(math.e)**-i)
        matrizx.append(a) #ALMACENO MIS VALORES MODIFICADOS DE LA MATRIZ POR PARAMETRO
    matriz_new = np.array(matrizx) #RECIEN LA CONVIERTO A UNA MATRIZ NUMPY
    print(matriz_new)
    return matriz_new

def matriz(f,c):
    aux = np.linspace(0,1,24)
    A = aux.reshape(f,c)
    #GUARDAMOS EN CSV
    np.savetxt("Matriz_A.csv",A,delimiter=",",fmt='%.2f')
def leer_cambiar(f,c):
    aux = np.genfromtxt("Matriz_A.csv",delimiter=",")
    B = aux.reshape(f,c)
    #GUARDAMOS EN CSV
    np.savetxt("Matriz_B.csv",B,delimiter=",",fmt='%.2f')
    #retorno la matriz
    return B

#------------main-------------
M = 6
N = 4
P = 3
R = 8
matriz(M,N)
matriz_new = leer_cambiar(P,R)
matriz_sigma = sigmoide(matriz_new)
matriz_c = conversion(matriz_sigma)
tupla_posicion(matriz_c)
