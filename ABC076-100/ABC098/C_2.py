N = int(input())
S = list(input())

ans = [0] * N
#リーダーより東の東向きの人
ans[0] = S[1:].count("E")

#リーダーを東にずらしていく
for i in range(1, N):
    ans[i] = ans[i-1]
    if S[i-1] == "W":
        ans[i] += 1
    if S[i] == "E":
        ans[i] -= 1

#print("ans : {}".format(ans))
print(min(ans))