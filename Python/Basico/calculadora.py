# calculadora

a=float(input("numero a:"))
b=float(input("numero b:"))
print(f"Especifique que operación: ")
o=str(input("Ingrese la operacion: s:Suma m:Multi r:Resta d:Division: ")).lower()
resultado=0
if o=="s":
    resultado=a+b
    print(f"la suma es:{resultado}")
elif o=="m" or o=="p":
    resultado=a*b
    print(f"la multiplicacion es:{resultado}")
elif o=="r":
    resultado=a-b
    print(f"la resta es: {resultado}")
elif o=="d":
    if b!=0:
        resultado=a/b
        print(f"la division es:{resultado}")
    else:
        print(f"ERROR")
