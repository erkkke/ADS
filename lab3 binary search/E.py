n = int(input())
l = [int(i) for i in input().split()]
l = list(set(l))
l.sort()
print(l[-2])