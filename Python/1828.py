T = int(input())

for i in range(T):
    sheldon, raj = map(str, input().split())
    
    if sheldon == raj:
        print(f'Caso #{i+1}: De novo!')
    elif sheldon == 'tesoura' and raj == 'papel':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'papel' and raj == 'pedra':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'pedra' and raj == 'lagarto':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'lagarto' and raj == 'Spock':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'Spock' and raj == 'tesoura':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'tesoura' and raj == 'lagarto':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'lagarto' and raj == 'papel':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'papel' and raj == 'Spock':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'Spock' and raj == 'pedra':
        print(f'Caso #{i+1}: Bazinga!')
    elif sheldon == 'pedra' and raj == 'tesoura':
        print(f'Caso #{i+1}: Bazinga!')
    else:
        print(f'Caso #{i+1}: Raj trapaceou!')