N = int(input())
S = input()
ans = 0

for i in range(1, N):
    S1 = S[:i]
    S2 = S[i:]
    list_S1 = list(S1)
    list_S2 = list(S2)
    _and = set(list_S1) & set(list_S2)
    and_num = len(_and)
    if ans < and_num:
        ans = and_num

print(ans)