def solve(s, n):
    s -= 2*n

    result = ["1"]*n

    for i in range(n):
        if s == 0: # no sticks remained
            break
        if s == 5*(n-i):
            result[i] = "8"
            s -= 5
        elif s < 4: # not enough sticks to make a 9
            if i == n-1: # this is the last digit make the most of if
                if s == 3: # maximum digit is 5 with 5 sticks
                    result[i] = "5"
                    s -= 3
                elif s == 2: # maximum digit is 4 with 4 sticks
                    result[i] = "4"
                    s -= 2
                elif s == 1: # maximum digit is 7 with 3 sticks
                    result[i] = "7"
                    s -= 1
            else:
                result[i] = "7"
                s -= 1 # maximum digit is 7 with less than 6 sticks
        else:
            result[i] = "9"
            s -= 4
    print("".join(result))

stick = {"0": 6, "1": 2, "2": 5, "3": 5, "4": 4, "5": 5, "6": 6, "7": 3, "8": 7, "9": 6}
t = int(input())
sum = 0
res = ''
for i in range(t):
    l = [i for i in input().split()]
    s = l[1]
    for c in s:
        for j in stick:
            if c == j:
                sum += stick[j]
    while sum or t:
        
            if sum >= 11:
                res += '9'
                sum -= 6
            elif sum >=


