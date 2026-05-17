from math import factorial
import sys

for s in sys.stdin:
    s = s.strip()

    if s == "0":
        break

    print(factorial(len(s)))