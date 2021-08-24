n = list(map(int, input().split()))
n.sort(reverse=True)
n = ''.join(map(str, n))
sushiki = n[:2] + '+' + n[2]
ans = eval(sushiki)
print(ans)