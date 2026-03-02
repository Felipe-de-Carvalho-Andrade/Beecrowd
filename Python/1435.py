while True:
    N = int(input())
    if N == 0:
        break
    
    matrix = [[0] * N for _ in range(N)]
    
    for i in range(N):
        for j in range(N):
            # Calculate distance to top border
            dist_top = i
            # Calculate distance to bottom border
            dist_bottom = (N - 1) - i
            # Calculate distance to left border
            dist_left = j
            # Calculate distance to right border
            dist_right = (N - 1) - j
            
            matrix[i][j] = (min(dist_top, dist_bottom, dist_left, dist_right) + 1)
            
    
    for i in range(N):
        for j in range(N):
            if j == 0:
                print(f"{matrix[i][j]:>3}", end="")
            else:
                print(f" {matrix[i][j]:>3}", end="")
        print() # Newline after each row
    print() 