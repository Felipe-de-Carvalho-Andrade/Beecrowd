while True:
    try:
        N = int(input())
        X = map(int, input().split())
        larger = 0
        
        for x in X:
            if(x > larger):
                larger = x
        if larger < 10:
            print('1')
        elif larger >= 20:
            print('3')
        else:
            print('2')
            
    except EOFError:
        break