N = int(input())
P = list(map(int, input().split()))

min_P = P[0]
cnt = 1
for i in P[1:]:
    if min_P >= i:
        cnt += 1
    min_P = min(min_P, i)

print(cnt)