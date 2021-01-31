import sys
a, b, c = [], [], []

for s in sys.stdin:
    if s[0] == '9':
        a.append(s[2:])
    elif s[:2] == '10':
        b.append(s[3:])
    elif s[:2] == '11':
        c.append(s[3:])

while a:
    print('9 ' + a.pop(0), end='')
while b:
    print('10 ' + b.pop(0), end='')
while c:
    print('11 ' + c.pop(0), end='')