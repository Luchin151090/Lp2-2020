# calcular el area de un circulo
import math

a=float(input("Ingrese el radio:"))

area = math.pi * (a**2)
longitud = 2*math.pi*a
print(f"el area : {round(area,4)} y long: {round(longitud,4)}")
