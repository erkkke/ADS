from collections import deque
q1, q2 = deque(), deque()
for i in range(int(input())):
    s = input().split()
    if s[0] == '-':
        print(q2.popleft())
    elif s[0] == '+':
        q1.append(s[1])
    else:
        q1.appendleft(s[1])
    if len(q1) > len(q2):
        q2.append(q1.popleft())
