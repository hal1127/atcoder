N = int(input())
MOD = 998244353

l = 1
ans = 0
# [l, r)
while N >= l:
  r = min(l*10, N+1)
  ans += (r-l) * (1 + r-l) // 2
  l *= 10

ans %= MOD

print(ans)
