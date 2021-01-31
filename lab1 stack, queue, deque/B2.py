q = []

while True:
    a = input().split()

    if a[0] == "push":
        q.append(a[1])
        print('ok')
    elif a[0] == "pop":
        if q: print(q.pop(0))
        else: print("error")
    elif a[0] == "front":
        if q: print(q[0])
        else: print('error')
    elif a[0] == 'size':
        print(len(q))
    elif a[0] == 'clear':
        q.clear()
        print('ok')
    elif a[0] == 'exit':
        print('bye')
        break