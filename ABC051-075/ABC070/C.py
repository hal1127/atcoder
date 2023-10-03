n = int(input())
t = [int(input()) for _ in range(n)]
ans = 1

from fractions import gcd

def lcm(a, b):
    return a * b // gcd(a, b) # gcd=最大公約数

for v in t:
    ans = lcm(ans, v)

print(ans)