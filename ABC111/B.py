n = int(input())

for i in range(1, 10):
    ans = 100 * i + 10 * i + i
    if ans >= n:
        break

print(ans)