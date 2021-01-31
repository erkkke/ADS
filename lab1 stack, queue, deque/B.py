import queue

q = queue.Queue()

while True:
    inp = input().split()

    if inp[0] == 'push':
        q.put(inp[1])
        print('ok')
    elif inp[0] == 'pop':
        if not q.empty():
            print(q.get())
        else: print('error')
    elif inp[0] == 'front':
        if not q.empty():
            print(q.queue[0])
        else: print('error')
    elif inp[0] == 'size':
        print(q.qsize())
    elif inp[0] == 'clear':
        while not q.empty():
            q.get()
        print('ok')
    elif inp[0] == 'exit':
        print('bye')
        exit()