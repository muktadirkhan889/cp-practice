t = int(input())
for _ in range(t):
    n = int(input())
    incoming = input()
    outgoing = input()

    matrix = [['N' for i in range(n)] for j in range(n)]

    for i in range(n):
        for j in range(n):
            if i == j:
                matrix[i][j] = 'Y'
                continue
            if j > 0 and incoming[j] == 'Y' and outgoing[i] == 'Y' and outgoing[j-1] == 'Y' and matrix[i][j-1] == 'Y':
                matrix[i][j] = 'Y'
        for j in range(n-1, -1, -1):
            if j < n-1 and incoming[j] == 'Y' and outgoing[i] == 'Y' and outgoing[j+1] == 'Y' and matrix[i][j+1] == 'Y':
                matrix[i][j] = 'Y'
    print(f'Case #{_+1}:')
    for row in matrix:
        print(*row, sep="")
