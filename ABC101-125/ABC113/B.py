n = int(input())
t, a = map(int, input().split())
h = [int(x) for x in input().split()]
req_h = int(-(a-t)/0.006)

ans = 0
for i in range(1, n):
    if abs(h[ans] - req_h) > abs(h[i] - req_h):
        ans = i

print(ans+1)