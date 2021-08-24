N = int(input())
S = [""] * N
for i in range(N):
    S[i] = input()

from collections import Counter

cnt = Counter(S)

print(len(cnt))