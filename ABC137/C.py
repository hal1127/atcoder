from collections import Counter
from math import factorial
N = int(input())
S = []
for i in range(N):
    tmp = input()
    tmp = sorted(list(tmp))
    S.append("".join(tmp))

cnt = Counter(S)
ans = 0
for i in cnt:
    if cnt[i] > 1:
        ans += factorial(cnt[i]) // (factorial(cnt[i] - 2) * factorial(2))

print(ans)
#print("cnt = {}".format(cnt))