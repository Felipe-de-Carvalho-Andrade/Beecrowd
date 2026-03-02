N = []
X = int(input())
y = 0

for i in range(1000):
    N.append(y)
    y += 1
    if y == X:
        y = 0

for i in range(1000):
    print('N[%i] = %d' %(i, N[i]))