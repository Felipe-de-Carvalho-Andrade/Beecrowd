A,N = input().split(" ")
A = int(A)
N = int(N)

while N <= 0:
    N = int(input())
    
print(sum(A + i for i in range(N)))