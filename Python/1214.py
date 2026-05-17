c = int(input())

for _ in range(c):
    line = input().split()

    n = int(line[0])
    values = list(map(int, line[1:]))

    total = sum(values)
    avg = total / n

    count = 0
    for v in values:
        if v > avg:
            count += 1

    result = (count / n) * 100
    print(f"{result:.3f}%")