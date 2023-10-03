N, Q = map(int, input().split())
S = input()
t = [0] * N
#"AC"の出現回数の累積行列
#0文字目からi文字目までに出た"AC"の回数
for i in range(N-1):
    t[i+1] = t[i] + (1 if S[i : i+2] == "AC" else 0)

print(" ", end="")
for i in S:
    print(i + "  ", end="")
print()
print(t)
for i in range(Q):
    l, r = map(int, input().split())
    print(t[r-1] - t[l-1])