n = int(input())
res = []
for i in range(n):
    l = input().split()
    if l[0] == '1':
        res.append(int(l[1]))
    elif l[0] == '2':
        res.reverse()

for i in res:
    print(i, end=' ')