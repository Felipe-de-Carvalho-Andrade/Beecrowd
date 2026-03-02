import math

def simplify(num: int, den: int):
    g = math.gcd(abs(num), abs(den))
    return num // g, den // g

N = int(input())
for i in range(N):
    line = input().strip()

    parts = line.split()

    N1 = int(parts[0])
    D1 = int(parts[2])
    op = parts[3]
    N2 = int(parts[4])
    D2 = int(parts[6])

    if op == '+':
        num = N1 * D2 + N2 * D1
        den = D1 * D2
    elif op == '-':
        num = N1 * D2 - N2 * D1
        den = D1 * D2
    elif op == '*':
        num = N1 * N2
        den = D1 * D2
    else: 
        num = N1 * D2
        den = N2 * D1

    snum, sden = simplify(num, den)
    print(f"{num}/{den} = {snum}/{sden}")