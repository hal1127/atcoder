H = int(input())
i = 1
ans = 0

while True:
    if i <= H:
        ans += i
    else:
        break
    i *= 2

print(ans)