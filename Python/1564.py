while True: 
    try: 
        N = int(input())
        print((N == 0) and "vai ter copa!" or "vai ter duas!")
    except EOFError:
        break