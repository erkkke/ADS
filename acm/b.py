def solve(s, n):
    s -= 2*n # use n 1 digits

    result = ["1"]*n

    for i in range(n):
        if s == 0: # no sticks remained
            break
        if s == 5*(n-i): # we should use 8 from now on or else there will be extra sticks
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
for i in range(t):
    l = [i for i in input().split()]
    for c in l[1]:
        
s = sum(stick[c] for c in initial_number )
n = len( initial_number )
solve(s,n)