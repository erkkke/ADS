n, m = [int(i) for i in input().split()]
x, cnt = 0, 0
arr, max, min = [], [], []
a = [[int(j) for j in input().split()] for i in range(n)]

for i in range(n):
    x = 0
    for j in range(m):
        if arr[j][i] > arr[x][i]:
            x = j
    max.append(arr[x][i])

for i in range(n):
    x = 0
    for j in range(m):
        if arr[i][j] < arr[i][x]:
            x = j
    min.append(arr[i][x])

for i in range(n):
    for j in range(m):
        if arr[i][j] == min[i] and arr[i][j] == max[j]:
            cnt += 1

print(cnt)