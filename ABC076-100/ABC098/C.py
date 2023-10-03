N = int(input())
S = input()

wc = [0]
ec = [0]

for i in range(N):
    if S[i] == "W":
        wc.append(wc[i]+1)
        ec.append(ec[i])
    else:
        wc.append(wc[i])
        ec.append(ec[i]+1)

#print("wc : {}, ec : {}".format(wc, ec))

ans = ec[N]
for i in range(1, N):
    #W -> cnt, E -> sum - cnt
    tmp = wc[i] + ec[N] - ec[i+1]
    ans = min(tmp, ans)

print(ans)