N = int(input())

for i in range(N):
    X,Y = map(int, input().split())
    j = 0
    soma = 0
    
    while True:
        if X % 2 == 1:
            j += 1
            soma += X
        if j == Y:
            break
        X += 1
    
    print(soma)