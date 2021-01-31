n = int(input())
l = []
for i in range(n):
    s = input()
    if len(s) > 10:
        l.append(s[0] + str(len(s) - 2) + s[-1])
    else:
        l.append(s)
for i in l:
    print(i)