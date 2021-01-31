def primes(n):
    for i in range(2, int(n**0.5 + 1)):
        if p[i] == 0:
            k = i
            while k + i < n:
                k += i
                p[k] = 1

    for i in range(2, n):
        if p[i] == 0:
            print(i, end=' ')

n = int(input())
p = [0] * n
primes(n)