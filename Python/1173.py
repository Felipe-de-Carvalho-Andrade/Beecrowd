N = []
X = int(input())

for i in range(10):
    N.append(X)
    X = X * 2

for i in range(10):
    print('N[%i] = %d' %(i, N[i]))