N = []
X = float(input())

for i in range(100):
    N.append(X)
    X /= 2

for i in range(100):
    print('N[%i] = %.4lf' %(i, N[i]))