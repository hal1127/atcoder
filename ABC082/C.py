N = int(input())
a = input().split()
ans = 0

from collections import Counter
d = Counter(a)

for i in d:
    if d[i] != int(i):
        if d[i] > int(i):
            ans += d[i] - int(i)
        else:
            ans += d[i]

print(ans)