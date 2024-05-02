print("Hola usuario, bienvenido")
print("Ingrese dos numeros.")
n1=int(input("Numero 1: "))
n2=int(input("Numero 2: "))

print(f"El resultado de la suma es: {n1+n2}")
print(f"El resultado de la resta es: {n1-n2}")
print(f"El resultado de la multipliacion es: {n1*n2}")
print(f"El resultado de la division es: {n1/n2}")

print(f"{n1} elevado a {n2}={n1**n2}")

def factorial(n1):
    if n1==1:
        return 1
    else:
        return n1*factorial(n1-1)
    
print(f"El factorial de {n1} es: {factorial(n1)}")
print(f"El factorial de {n2} es: {factorial(n2)}")