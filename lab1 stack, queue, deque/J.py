def euclid_gcd(a, b):
    if b == 0:
        return a
    a = a % b
    return euclid_gcd(b, a)

def euclid_gcd2(a, b):
    while a > 0 and b > 0:
        if a > b: a %= b
        else: b %= a
    return a + b

a, b = int(input()), int(input())
print(euclid_gcd(a, b))