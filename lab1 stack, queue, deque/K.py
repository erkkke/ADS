def is_prime(n):
    i = 2
    while i * i <= n:
        if n % i == 0:
            print('composite')
            exit()
        i += 1
    print('prime')

n = int(input())
is_prime(n)
