stack = []
while True:
    inp = input().split()
    if inp[0] == 'push':
        stack.append(inp[1])
        print('ok')
    elif inp[0] == 'size':
        print(len(stack))
    elif inp[0] == 'pop':
        if stack: print(stack.pop())
        else: print('error')
    elif inp[0] == 'clear':
        stack.clear()
        print('ok')
    elif inp[0] == 'back':
        if stack: print(stack[-1])
        else: print('error')
    elif inp[0] == 'exit':
        print('bye')
        break