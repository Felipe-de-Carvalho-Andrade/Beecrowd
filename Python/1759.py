N = int(input())

for i in range(1, N+1):
    print('Ho', end=[' ', '!\n'][i % N == 0])