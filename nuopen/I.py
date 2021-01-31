import math
n, x = [int(i) for i in input().split()]
if n - 1 >= x:
    print(1, 1)
    exit()
cnt = math.ceil(x / (n - 1))
print(cnt, cnt * 2 - 1)


