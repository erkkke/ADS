from collections import deque

q = deque()

while True:
    a = input().split()

    if a[0] == 'push_front':
        q.appendleft(a[1])
        print('ok')
    elif a[0] == 'push_back':
        q.append(a[1])
        print('ok')
    elif a[0] == 'pop_back':
        if q: print(q.pop())
        else: print('error')
    elif a[0] == 'pop_front':
        if q: print(q.popleft())
        else: print('error')
    elif a[0] == 'front':
        if q: print(q[0])
        else: print('error')
    elif a[0] == 'back':
        if q: print(q[-1])
        else: print('error')
    elif a[0] == 'size':
        print(len(q))
    elif a[0] == 'clear':
        print(q.clear())
        print('ok')
    elif a[0] == 'exit':
        print('bye')
        exit()