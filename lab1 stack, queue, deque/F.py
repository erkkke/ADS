def is_pair(left, right):
    return left + right in ['()', '[]', '{}']

stack = []
for bracket in input():
    if bracket in '({[':
        stack.append(bracket)
    else:
        if not stack:
            print('no')
            exit()
        if not is_pair(stack.pop(), bracket):
            print('no')
            exit()

if stack: print('no')
else: print('yes')
