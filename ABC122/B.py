S = input()
N = len(S)
s = {"A", "T", "C", "G"}

ans = 0
for i in range(N):
    for j in range(i, N):
        if all([c in s for c in S[i:j+1]]):
            ans = max(ans, j-i+1)
print(ans)