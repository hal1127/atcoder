from collections import Counter as C
n = int(input())
v = list(map(int, input().split()))

#偶数番と奇数番の同じ数字の数
evens = C(v[::2]).most_common()
odds = C(v[1::2]).most_common()
#[('数字', 出現数), ('数字', 出現数)...]

#偶数番と奇数番の数字が違うならそのままans
if evens[0][0] != odds[0][0]:
    ans = n - (evens[0][1] + odds[0][1])
#同じ時は各[0][1]と[1][1]の合計を比べて
# 出現数が多いほうがans
else:
    #oddsの長さが1より大きければ
    # rにevensの1番目の出現数とoddsの2番目の出現数の和を代入
    #  そうでなければevensの1番目の出現数を代入（oddsを全換えするため）
    r = evens[0][1] + odds[1][1] if len(odds) > 1 else evens[0][1]
    s = evens[1][1] + odds[0][1] if len(evens) > 1 else odds[0][1]
    if r > s:
        ans = n - r
    else:
        ans = n - s

print(ans)