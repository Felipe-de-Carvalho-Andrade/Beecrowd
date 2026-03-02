i = 0

while True:
    a = float(input())
    
    if not(a >= 0 and a <= 10):
        print('nota invalida')
    else:
        if i == 0:
            b = a
            i = 1
        else:
            print('media =', (a + b)/2)
            break