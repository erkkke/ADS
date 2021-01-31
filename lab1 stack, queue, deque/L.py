def gcd(n, k):
    while n > 0 and k > 0:
        if n > k: n %= k
        else: k %= n
    return n + k

def lcm(n, k):
    return int(n * k / gcd(n, k))

n, k = [int(i) for i in input().split()]
print(lcm(n, k))
