l = [1, 2, 'a', 'c']

for i in l:
    if type(i) == str:
        l.remove(i)
print(l)