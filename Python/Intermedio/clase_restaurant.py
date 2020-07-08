import copy
class Restaurant:
    def __init__(self,nombre,tipo_comida): #constructor
        self.nombre=nombre
        self.tipo_comida=tipo_comida
    def describe_restaurant(self):
        print(f"El restaurante {self.nombre} presenta en la carta {self.tipo_comida}")
    def open_restaurant(self):
        print(f"El restaurante {self.nombre} esta abierto")

r1 = Restaurant("Chefcito","RATATOUILLE")
r1.describe_restaurant()
r1.open_restaurant()
print(r1.nombre)
print(r1.tipo_comida)
print("")
r2 = Restaurant("Gaston","ARROZ CON PATO")
r2.describe_restaurant()
r2.open_restaurant()
print(r2.nombre)
print(r2.tipo_comida)
