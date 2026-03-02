N = int(input())
X = []

for i in range(N):
    if i == 0:
        X.append(0)
    elif i == 1:
        X.append(1)
    else:
        X.append(X[i-1] + X[i-2])
        
print(*X)