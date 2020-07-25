import numpy as np
def RMSE(matriz1,matriz2):

    lista = []
    for i in range(len(matriz1)):
        for j in range(len(matriz1[0])):
            lista.append(np.sqrt(((matriz1[i][j]-matriz2[i][j])**2/(24))))
    Matriz_unid = np.array(lista)
    Matriz_unid= Matriz_unid.reshape(24,1)
    print(Matriz_unid)

def crear_matrices(f,c,f1,c1):
    AP_aux =  np.linspace(10,50,24)
    AP = AP_aux.reshape(f,c)

    #Profesora si repito los rangos (10,50) sale 0 el RMS
    #Asi que, quize modificar el rango para que se aprecie mejor
    AR_aux = np.linspace(10,55,24)
    AR =  AR_aux.reshape(f1,c1)

    np.savetxt("Matriz_AP.csv",AP,delimiter=" ",fmt='%.2f')
    np.savetxt("Matriz_AR.csv",AR,delimiter=" ",fmt='%.2f')
   # print(AP)
    print()
    #print(AR)
    return AP,AR

#-------MAIN--------#
M = 3
N = 8

Matriz = crear_matrices(M,N,M,N)
RMSE(Matriz[0],Matriz[1])
