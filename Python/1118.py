i = 0
y = True

while y == True:
    a = float(input())
    
    if not(a >= 0 and a <= 10):
        print('nota invalida')
    else:
        if i == 0:
            b = a
            i = 1
        else:
            print('media = %.2f' %((a + b)/2))
            i = 2
    
    if i == 2:
        while True:
            print('novo calculo (1-sim 2-nao)')
            x = int(input())
            if x == 1:
                i = 0
                break
            elif x == 2:
                y = False
                break