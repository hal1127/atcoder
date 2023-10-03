n, m = map(int, input().split())
ary = []
for i in range(m):
    #[0] = 県, [1] = 誕生年
    ary.append([int(x) for x in input().split()])
    ary[i].append(i) #[2] = 復元用の通し番号

#県でソートして、同じなら誕生年順にソート
ary.sort(key=lambda x:(x[0], x[1]))

p = 1
num = 1
for v in ary:
    if v[0] != p:
        p = v[0]
        num = 1
    _id = str(v[0]).zfill(6) + str(num).zfill(6)
    num += 1
    v.append(_id)

ary.sort(key=lambda x:x[2]) #最初の順序に復元

for v in ary:
    print(v[3])