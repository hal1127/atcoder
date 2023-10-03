H, A = map(int, input().split())

ans = H // A
if H % A:
    ans += 1

print(ans)