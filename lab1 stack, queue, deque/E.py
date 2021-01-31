f = [int(i) for i in input().split()]
s = [int(i) for i in input().split()]

i = 0
while f and s:
    if f[0] == 9 and s[0] == 0:
        s.append(f.pop(0))
        s.append(s.pop(0))
        i += 1
    elif f[0] == 0 and s[0] == 9:
        f.append(f.pop(0))
        f.append(s.pop(0))
        i += 1
    elif f[0] > s[0]:
        f.append(f.pop(0))
        f.append(s.pop(0))
        i += 1
    elif f[0] < s[0]:
        s.append(f.pop(0))
        s.append(s.pop(0))
        i += 1
    if i >= 10 ** 6:
        print('botva')
        exit()

if f and not s:
    print('first', i)
else: print('second', i)