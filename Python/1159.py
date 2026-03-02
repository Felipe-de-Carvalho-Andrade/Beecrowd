while True:
    X = int(input())
    
    if X == 0:
        break
    
    j = 0
    soma = 0
    
    while True:
        if X % 2 == 0:
            j += 1
            soma += X
        if j == 5:
            break
        X += 1
    
    print(soma)