lista = []

for i in range(5): 
    lista.append(int(input()))
    
print(f"{len([x for x in lista if x % 2 == 0])} valores pares")