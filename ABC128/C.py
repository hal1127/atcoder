N, M = map(int, input().split())

k = [0] * M
s = [[0] * N for i in range(M)]
tmp = [0] * (N + 1)
for i in range(M):
    tmp = [int(i) for i in input().split()]
    k[i] = tmp[0]
    s[i] = tmp[1 : k[i] + 1]

p = [0] * M
p = list(map(int, input().split()))

#電球ごとのスイッチのonの数
k_cnt = [0] * M
ans = 0

for i in range(2 ** N):
    #スイッチのオンオフの組み合わせ
    bit_str = format(i, "0"+str(N)+"b")
    #すべてのスイッチがオンか
    onLight = True
    for j in range(len(bit_str)):
        #bit_strが"1"ならスイッチはオン
        if bit_str[j] == "1":
            for k in range(len(s)):
                #スイッチが電球に接続されているか
                if j+1 in s[k]:
                    s_cnt[k] += 1
    for j in range(len(s_cnt)):
        if s_cnt[j] % 2 != p[j]:
            onLight = False
    if onLight:
        ans += 1
    s_cnt = [0] * M

print(ans)