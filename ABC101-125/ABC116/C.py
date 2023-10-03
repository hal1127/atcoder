n = int(input())
h = [int(x) for x in input().split()]
i = 0
ans = 0

while sum(h):
    while True:
        if h[i] == 0 and i < n:
            i += 1
        else:
            break

    while True:
        if h[i] != 0:
            h[i] -= 1
            i += 1
        if i >= n or h[i] == 0:
            i = 0
            ans += 1
            break

print(ans)