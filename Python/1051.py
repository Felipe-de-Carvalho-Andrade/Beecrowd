N = float(input())

if N < 2000.01:
    print("Isento")
elif N < 3000.01:
    print(f"R$ {((N - 2000) * 0.08):.2f}")
elif N < 4500.01:
    print(f"R$ {((N - 3000) * 0.18 + 1000 * 0.08):.2f}")
else:
    print(f"R$ {((N - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08):.2f}")