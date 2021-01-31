stack = []

for i in input().split():
    if i in '+-*':
        b = stack.pop()
        a = stack.pop()

        if i == '+': stack.append(a+b)
        elif i == '-': stack.append(a-b)
        elif i == '*': stack.append(a*b)

    else:
        stack.append(int(i))

print(stack.pop())