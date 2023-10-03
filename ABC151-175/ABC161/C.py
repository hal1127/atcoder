N, K = map(int, input().split())

tmp = N % K
ans = min(tmp, abs(tmp - K))
print(ans)