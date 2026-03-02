def qtd_num(X, Z):
    i = 1
    Y = X
    
    while X < Z:
        X += Y+1
        i += 1
        Y += 1      
    
    return i

X = int(input())
Z = int(input())

while X >= Z:
    Z = int(input())

print(qtd_num(X, Z))