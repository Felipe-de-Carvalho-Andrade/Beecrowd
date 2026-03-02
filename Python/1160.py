for i in range(int(input())):
    pa, pb, ga, gb = input().split()
    pa = int(pa) 
    pb = int(pb)
    ga = float(ga)
    gb = float(gb)
    time = 0
    
    while pa <= pb:
        pa += int(pa*(ga/100))
        pb += int(pb*(gb/100))
        time += 1
        
        if time > 100:
            break
    
    if time > 100:
        print("Mais de 1 seculo.")
    else:
        print(f"{time} anos.")