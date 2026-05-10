from math import factorial
import sys

for linha in sys.stdin:
    M, N = map(int, linha.split())
    print(factorial(M) + factorial(N))