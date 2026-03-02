I = 0
J = 1
aux = 0.2

for i in range (11):
    for j in range (3):
        if I == 0 or I == 1.0 or I > 1.9:
            print(f"I={I:.0f} J={J:.0f}")
        else:
            print(f"I={I:.1f} J={J:.1f}")
        J += 1  
    J = 1 + aux
    I += 0.2
    aux += 0.2