import math
n = [int(i) for i in input().split()]
cnt = 0
a = [int(i) for i in input().split()]

l, r = 0, 1000000000

for i in range(1000):
    m = (l + r) // 2
    for j in a:
        cnt += math.ceil(j / m)
        if cnt > n[1]: break
    if (cnt > n[1]):
        l = m
    else:
        r = m

print(l)
